/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:51:42 by carmart2          #+#    #+#             */
/*   Updated: 2024/01/25 16:47:17 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	// Oficial
	printf("%i\n", strncmp("AAA", "AAA", 3));
	printf("%i\n", strncmp("BBB", "AAA", 3));
	printf("%i\n", strncmp("AAA", "BBB", 3));
	printf("%i\n", strncmp("AAAA", "BBB", 4));
	printf("%i\n", strncmp("AAA", "BBBB", 4));
	printf("%i\n", strncmp("AAA", "BBB", 4));

	//Mio
	printf("%i\n", ft_strncmp("AAA", "AAA", 3));
	printf("%i\n", ft_strncmp("BBB", "AAA", 3));
	printf("%i\n", ft_strncmp("AAA", "BBB", 3));
	printf("%i\n", ft_strncmp("AAAA", "BBB", 4));
	printf("%i\n", ft_strncmp("AAA", "BBBB", 4));
	printf("%i\n", ft_strncmp("AAA", "BBB", 4));
}*/
