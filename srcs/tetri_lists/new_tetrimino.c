/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_tetrimino.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:20:29 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/14 11:09:48 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/fillit.h"
#include "../../libft/libft.h"

t_tetri		*new_tetrimino(char **pattern, int pos)
{
	t_tetri		*new_tetri;
	int			i;
	int			j;

	new_tetri = (t_tetri *)malloc(sizeof(t_tetri));
	if (new_tetri == NULL)
		return (NULL);
	i = 0;
	while (pattern[i])
	{
		j = 0;
		while (pattern[i][j])
		{
			new_tetri->pattern[i][j] = pattern[i][j];
			j++;
		}
		i++;
	}
	new_tetri->size_x = j;
	new_tetri->size_y = i;
	new_tetri->pos = pos;
	new_tetri->next = NULL;
	return (new_tetri);
}
