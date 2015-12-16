/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:31:05 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/16 14:15:43 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		main(int ac, char **av)
{
	t_tetri	**first;
	char	**board;
	int		nb_tetri;

	first = NULL;
	if (ac != 2 || (first = ft_read_file(av[1], first)) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	nb_tetri = list_len(*first);
	board = extend_board(NULL, nb_tetri);
	while (solve_me(*first, board, nb_tetri) == NULL)
		board = extend_board(board, ++nb_tetri);
	write(1, "didnt crash lol\n", 16);
	return (0);
}
