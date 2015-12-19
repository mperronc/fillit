/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_open.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:48:11 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/19 16:02:01 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../incl/fillit.h"

t_tetri	**ft_read_file(char *file_to_open, t_tetri **first)
{
	int		fd;
	int		ret;
	char	*tmp;
	char	*pattern;

	fd = open(file_to_open, O_RDONLY);
	tmp = (char *)malloc(sizeof(char) * 21);
	pattern = (char *)malloc(sizeof(char) * 16);
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, tmp, 21);
		if (ret > 0)
		{
			tmp[20] = '\0';
			if (check_symbols(tmp) == 0)
				return (NULL);
			ft_strnout(pattern, tmp);
			pattern = pattern_to_left_corner(pattern);
			push_tetrimino_back(first, pattern);
		}
	}
	free(tmp);
	free(pattern);
	close(fd);
	return (first);
}
