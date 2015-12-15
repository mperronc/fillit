/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_me.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 08:01:04 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/15 08:21:10 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/fillit.h"
#include "../../libft/libft.h"

/*Assuming all the pieces are parsed correctly */

char	**solve_me(t_tetri *piece, char **board, int board_size)
{
	int	i;
	int j;
	
	if (piece == NULL)
		return (board);
	i = 0;
	while (i < board_size)
	{
		j = 0;
		while (j < board_size)
		{
			if (can_place(piece->pattern, board, i, j))
				solve_me(piece->next, board, board_size);
			j++;
		}
		i++;
	}
	return (NULL);
}
