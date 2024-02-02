/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:00:23 by carmart2          #+#    #+#             */
/*   Updated: 2024/02/02 16:34:57 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcat pide que dstsize incluya espacio para el nul, por eso para trabajar
// le resto -1, por la diferencia que causa que el array comience en 0.

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	int		start_from;
	size_t	index;

	if (dstsize == 0)
		return (ft_strlen(src));
	index = 0;
	dstsize -= 1;
	start_from = 0;
	while (dst[start_from] != '\0')
		start_from++;
	while (index <= dstsize - start_from - 1 && src[index] != '\0')
	{
		if (index == dstsize - start_from)
			return (start_from + ft_strlen(src));
		dst[start_from + index] = src[index];
		index++;
	}
	dst[start_from + index] = '\0';
	return (start_from + ft_strlen(src));
}
