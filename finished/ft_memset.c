/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:29:21 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/24 16:27:11 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*modificable;
	size_t			index;

	index = 0;
	modificable = (unsigned char *) b;
	while (index < len)
	{
		modificable[index] = (unsigned char) c;
		index++;
	}
	return (b);
}
