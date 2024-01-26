/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:26:41 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/26 16:49:16 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*uc_dest;
	unsigned char	*uc_src;

	uc_dest = (unsigned char *)dest;
	uc_src = (unsigned char *)src;
	if (src < dest)
	{
		i = n;
		while (--i >= 0)
			uc_dest[i] + uc_src[i];
	}
	else
	{
		i = -1;
		while (++i < n)
			uc_dest[i] = uc_src[i];
	}
	return (dest);
}
