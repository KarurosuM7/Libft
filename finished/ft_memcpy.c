/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:35:24 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/24 16:26:44 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*modificable;
	size_t			index;

	modificable = (unsigned char *) dst;
	index = 0;
	while (index < n)
	{
		modificable[index] = ((unsigned char *) src)[index];
		index++;
	}
	return (dst);
}
