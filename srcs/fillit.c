/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 10:31:05 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/06 17:30:00 by mperronc         ###   ########.fr       */
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
	print_list(*first);
	board_size = get_board_size(list_len(*first));
	printf("%d", board_size);
	board = extend_board(NULL, board_size);
	while (solve_me(first, board, board_size) == NULL)
	{
		board = extend_board(board, ++board_size);
		printf("%d", board_size);
	}
	print_board(board, board_size);
	return (0);
}
