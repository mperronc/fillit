/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twoD_to_oneD.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:14:32 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/14 11:09:48 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/fillit.h"
#include "../../libft/libft.h"

char	*twoD_to_oneD(char **pattern)
{
	char	*oneD_pattern;
	int i;
	int j;
	int n;

	oneD_pattern = (char *)malloc(sizeof(char) * 17);
	i = 0;
	n = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			oneD_pattern[n] = pattern[i][j];
			n++;
			j++;
		}
		i++;
	}
	return (oneD_pattern);
}
