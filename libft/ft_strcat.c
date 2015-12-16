/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:19:29 by mperronc          #+#    #+#             */
/*   Updated: 2015/11/25 17:18:23 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char *ret;

	ret = s1;
	while (*s1 != 0)
		s1++;
	while (*s2 != 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = 0;
	return (ret);
}
