/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_me.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 08:01:04 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 11:56:15 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

char	**solve_me(t_tetri **piece, char **board, int board_size)
{
	static int	solved = 0;
	int			i;
	int			j;

	i = 0;
	while (i < board_size && solved == 0)
	{
		j = 0;
		while (j < board_size && solved == 0)
		{
			if (can_place((*piece)->pattern, board, i, j, board_size))
			{
				board = put_tetri(board, (*piece)->pattern, i, j);
				if ((*piece)->next == NULL)
					solved = 1;
				else
					solve_me(&(*piece)->next, board, board_size);
			}
			j++;
		}
		i++;
	}
	if (solved == 0)
		erase_piece(board, board_size, (*piece)->pos - 1);
	if (solved == 0 && (*piece)->pos == 0)
		return (NULL);
	return (board);
}
