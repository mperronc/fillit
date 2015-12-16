/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_with_dot.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboudy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 13:07:07 by dboudy            #+#    #+#             */
/*   Updated: 2015/12/16 13:37:58 by dboudy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew_with_dot(char *new_boardline, int size)
{
	int		i;

	i = 0;
	new_boardline[i] = (char *)malloc(sizeof(char) * (size + 4));
	while (i < size + 4)
	{
		newboardline[i] = '.';
		i++;
	}
	new_boardline[i] = 0;
	return (new_boardline);
}
