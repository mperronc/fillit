/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extend_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 08:29:00 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/15 10:34:32 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/fillit.h"
#include "../../libft/libft.h"

char	**extend_board(char **board, int board_newsize)
{
	char	**new_board;
	int		i;

	free(board);
	new_board = (char **)malloc(sizeof(char *) * (board_newsize + 4));
	i = 0;
	while (i < board_newsize + 4)
	{
		new_board[i] = (char *)malloc(sizeof(char) * (board_newsize + 4));
		i++;
	}
	new_board[i] = 0;
	return (new_board);
}
