/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 07:57:23 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/15 10:34:59 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/fillit.h"
#include "../../libft/libft.h"

int		list_len(t_tetri *first)
{
	int		i;
	t_tetri	*tmp;

	tmp = first;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
