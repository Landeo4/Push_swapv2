/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 13:30:32 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/25 13:49:37 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strlcpy(char **dest, char *src, size_t size, int i)
{
	size_t	j;

	j = 0;
	if (!dest || !src)
		return (0);
	if (size != 0)
	{
		while (src[j] && j < (size - 1))
		{
			dest[i][j] = src[j];
			j++;
		}
		dest[i][j] = '\0';
	}
	return (dest[i]);
}
