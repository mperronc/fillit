/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:48:11 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/07 17:17:24 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../incl/fillit.h"

static int		read_first(int fd, t_tetri ***first)
{
	char	*tmp;
	int		ret;

	tmp = (char *)malloc(sizeof(char) * 21);
	tmp[20] = 0;
	ret = read(fd, tmp, 20);
	if (ret < 20)
		return (-1);
	if (check_symbols(tmp, 1) == 0)
		return (-1);
	tmp = ft_strnout(tmp);
	tmp = pattern_to_left_corner(tmp);
	push_tetrimino_back(*first, tmp);
	free(tmp);
	return (ret);
}

t_tetri			**ft_read_file(char *file_to_open, t_tetri **first)
{
	int		fd;
	int		ret;
	char	*tmp;
	int		i;

	fd = open(file_to_open, O_RDONLY);
	if ((ret = read_first(fd, &first)) == -1)
		return (NULL);
	i = 2;
	while (ret > 0)
	{
		tmp = (char *)malloc(sizeof(char) * 22);
		tmp[21] = 0;
		ret = read(fd, tmp, 21);
		if (ret > 0)
		{
			if (check_symbols(tmp, 0) == 0 || i++ > 26)
				return (NULL);
			tmp = pattern_to_left_corner(ft_strnout(tmp));
			push_tetrimino_back(first, tmp);
		}
		free(tmp);
	}
	close(fd);
	return (first);
}
