/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:47:53 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/26 17:54:20 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*take_from;
	char	*substring;

	len -= 1;
	if (s == NULL || s[start + len] == '\0')
		return (NULL);
	index = 0;
	take_from = (char *)s;
	substring = malloc((len + 1) * 1);
	if (!substring)
		return (NULL);
	while (index < len)
	{
		substring[index] = take_from[start + index];
		index++;
	}
	substring[index] = '\0';
	return (substring);
}
