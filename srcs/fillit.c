/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:31:05 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/19 16:05:25 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		main(int ac, char **av)
{
	t_tetri	**first;
	char	**board;
	int		board_size;

	if (ac != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	first = (t_tetri **)malloc(sizeof(t_tetri *) * 26);
	*first = NULL;
	first = ft_read_file(av[1], first);
	if (first == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	board_size = get_board_size(list_len(*first));
	board = extend_board(NULL, board_size);
	while (solve_me(first, board, board_size) == NULL)
		board = extend_board(board, ++board_size);
	print_board(board, board_size);
	return (0);
}
