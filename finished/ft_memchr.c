/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:58:50 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/24 16:25:46 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*read;

	read = (unsigned char *) s;
	while (n > 0)
	{
		if (*read == (unsigned char) c)
			return (read);
		n--;
		read++;
	}
	return (NULL);
}
