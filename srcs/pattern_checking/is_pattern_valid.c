/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pattern_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:04:31 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/15 06:30:26 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/fillit.h"
#include "../../libft/libft.h"

int		is_pattern_valid(char *pattern)
{
	int		offset;

	if (ft_strlen(pattern) != 16)
		return (0);
	if (is_pattern_valid_dotsharp(pattern))
	{
		offset = get_offset(pattern);
		return (is_pattern_valid_O(pattern, offset) ||
				is_pattern_valid_I(pattern, offset) ||
				is_pattern_valid_S(pattern, offset) ||
				is_pattern_valid_Z(pattern, offset) ||
				is_pattern_valid_T(pattern, offset) ||
				is_pattern_valid_L(pattern, offset) ||
				is_pattern_valid_J(pattern, offset));
	}
	return (0);
}
