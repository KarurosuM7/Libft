/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 09:48:00 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/24 16:21:17 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*temporal;
	size_t			index;

	index = 0;
	temporal = (unsigned char *) s;
	while (index < n)
	{
		temporal[index] = '\0';
		index++;
	}
}
