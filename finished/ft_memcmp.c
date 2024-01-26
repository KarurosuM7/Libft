/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:31:17 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/26 16:57:33 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				index;
	unsigned char	*ch1;
	unsigned char	*ch2;

	index = 0;
	ch1 = (unsigned char *) s1;
	ch2 = (unsigned char *) s2;
	while (index < n)
	{
		if (ch1[index] != ch2[index])
			return (ch1[index] - ch2[index]);
		index++;
	}
	return (0);
}
