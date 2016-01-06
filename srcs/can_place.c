/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_place.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 07:51:25 by mperronc          #+#    #+#             */
/*   Updated: 2016/01/06 19:14:03 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		can_place(char piece[4][4], t_board *board, int y, int x)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (piece[i][j] != '.')
			{
				if (board->grid[i + y][x + j] != '.' ||
					i + y >= board->size ||
					x + j >= board->size)
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
