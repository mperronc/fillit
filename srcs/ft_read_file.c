/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_open.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:48:11 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/16 14:48:13 by mperronc         ###   ########.fr       */
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
		tmp[20] = '\0';
		ft_strnout(pattern, tmp);
		if (is_pattern_valid(pattern) == 0)
			return (NULL);
		push_tetrimino_back(first, pattern);
	}
	free(tmp);
	free(pattern);
	close(fd);
	return (first);
}
