/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validity.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 11:02:07 by dboudy            #+#    #+#             */
/*   Updated: 2016/01/07 17:15:27 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/fillit.h"
#include "../libft/libft.h"

static int	check_place_of_n(char *pattern, int first)
{
	int i;

	i = 0;
	if (!first)
	{
		if (pattern[0] != '\n')
			return (99);
		i++;
	}
	while (pattern[i])
	{
		if (pattern[i] == '\n')
			if (i != (5 - first) && i != (10 - first) &&
				i != (15 - first) && i != (20 - first))
				return (99);
		i++;
	}
	return (0);
}

static int	check_link(char *pattern)
{
	int	link;
	int	i;

	link = 0;
	i = 0;
	while (pattern[i])
	{
		if (pattern[i] == '#')
		{
			if (pattern[i + 1] == '#')
				link++;
			if (pattern[i - 1] == '#')
				link++;
			if (pattern[i + 5] == '#')
				link++;
			if (pattern[i - 5] == '#')
				link++;
		}
		i++;
	}
	return (link);
}

int			check_symbols(char *pattern, int first)
{
	int		n;
	int		pt;
	int		d;
	int		link;

	pt = 0;
	d = 0;
	n = check_place_of_n(pattern, first);
	link = check_link(pattern);
	while (pattern[n + pt + d])
	{
		if (pattern[n + pt + d] == '.')
			pt++;
		else if (pattern[n + pt + d] == '\n')
			n++;
		else if (pattern[n + pt + d] == '#')
			d++;
		else
			return (0);
	}
	if (n == 5 - first && d == 4 && pt == 12 && link >= 6)
		return (1);
	return (0);
}
