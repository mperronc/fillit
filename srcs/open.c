/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_open.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 14:48:11 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/14 16:42:20 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include "../incl/fillit.h"

void	ft_read_file(char *file_to_open)
{
	int		fd;
	int		ret;
	int		pos;
	char	*tmp;
	char	*tetri;

	fd = open(file_to_open, O_RDONLY);
	tmp = (char *)malloc(sizeof(char) * 21);
	tetri = (char *)malloc(sizeof(char) * 16);
	ret = 1;
	pos = 0;
	while (ret > 0)
	{
		ret = read(fd, tmp, 21);
		tmp[20] = '\0';
		ft_strnout(tetri, tmp);
		new_tetrimino(tetri, pos);
	}
	free(tmp);
	close(fd);
}

int		main(int ac, char **av)
{
	char	*name;

	if (ac != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	ft_read_file(av[1]);
	return (0);
}
