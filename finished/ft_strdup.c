/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:31:00 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/26 17:08:18 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// No hace falta *1, pero para que se vea que es el tamano de char
char	*ft_strdup(const char *s)
{
	int		index;
	char	*copy;

	index = 0;
	while (s[index] != '\0')
		index++;
	copy = (char *)malloc((index + 1) * 1);
	if (!copy)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		copy[index] = s[index];
		index++;
	}
	copy[index] = '\0';
	return (copy);
}
