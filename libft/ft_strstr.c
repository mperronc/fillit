/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:54:45 by mperronc          #+#    #+#             */
/*   Updated: 2015/12/02 16:59:38 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	if (*s2 == 0)
		return ((char *)s1);
	i = 0;
	while (s1[i] != 0)
	{
		j = 0;
		while (s1[i + j] == s2[j])
		{
			j++;
			if (s2[j] == 0)
				return ((char *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
