/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:10:46 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/26 17:03:35 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//reserva en memoria (count) espacios de (size) bytes cada uno
void	*ft_calloc(size_t count, size_t size)
{
	int				index;
	unsigned char	*temp;

	index = 0;
	temp = (unsigned char *)malloc(count * size);
	if (!temp)
		return (NULL);
	while (index < (count * size))
	{
		temp[index] = '\0';
		index++;
	}
	return (temp);
}
