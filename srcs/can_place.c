/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_place.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 07:51:25 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/16 20:31:47 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

int		can_place(char piece[4][4], char **board, int x, int y)
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
				if (board[x + i][y + j] != '.')
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
