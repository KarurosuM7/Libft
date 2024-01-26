/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:30:22 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/25 17:45:58 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Entendemos copiar como SOBREESCRIBIR un string con otro
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	index;

	index = 0;
	while (src[index] != '\0' && index < dstsize - 1)
	{
		if (index == dstsize)
			return (dstsize);
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}
