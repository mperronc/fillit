/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_pattern_valid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 01:04:31 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/14 11:02:09 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/fillit.h"
#include "../../libft/libft.h"

int		is_pattern_valid(char **pattern)
{
	char	*oneD_pattern;
	int		offset;

	oneD_pattern = twoD_to_oneD(pattern);
	if (ft_strlen(oneD_pattern) != 16)
		return (0);
	if (is_pattern_valid_dotsharp(oneD_pattern))
	{
		offset = get_offset(oneD_pattern);
		return (is_pattern_valid_O(oneD_pattern, offset) ||
				is_pattern_valid_I(oneD_pattern, offset) ||
				is_pattern_valid_S(oneD_pattern, offset) ||
				is_pattern_valid_Z(oneD_pattern, offset) ||
				is_pattern_valid_T(oneD_pattern, offset) ||
				is_pattern_valid_L(oneD_pattern, offset) ||
				is_pattern_valid_J(oneD_pattern, offset));
	}
	return (0);
}
