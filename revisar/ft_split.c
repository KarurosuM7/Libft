/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmart2 <carmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:44:43 by carmart2          #+#    #+#             */
/*   Updated: 2024/02/01 18:50:48 by carmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *string, char ignore)
{
	int	index;
	int	is_new_word;
	int	words;

	index = 0;
	is_new_word = 0;
	words = 0;
	while (string[index] != '\0')
	{
		if (string[index] != ignore)
			is_new_word = 1;
		if (string[index] == ignore && is_new_word)
		{
			is_new_word = 0;
			words++;
		}
		index++;
	}
	if (is_new_word)
		words++;
	return (words);
}

// En el malloc check siendo void no puede devolver NULL,
// porque no puede devolver nada. Con return solo se "corta"
static void	write_word(char const *s, char **arr, int index, int len)
{
	char	*word;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return ;
	ft_strlcpy(word, &s[index], len);
	*arr = word;
}

static void	how_long_is_word(char const *s, char c, char **arr)
{
	int	index;
	int	word_index;
	int	letters;
	int	new;

	index = 0;
	letters = 0;
	new = 0;
	word_index = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c)
		{
			new = 1;
			letters++;
		}
		if (s[index] == c && new)
		{
			write_word(s, arr, index, letters);
			arr++;
			new = 0;
		}
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;

	words = count_words(s, c);
	printf("%i palabras", words);
	arr = malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	how_long_is_word(s, c, arr);
	return (arr);
}

/*
int	main(void)
{
	char const	*string;
	char		**none;
	int			i;

	string = "1 2 3 4 5 6";
	none = ft_split(string, ' ');
	i = 0;
	while (none[i])
	{
		printf(" %i} -> %s\n", i, none[i]);
		i++;
	}
} */
