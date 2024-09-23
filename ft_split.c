/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:57:51 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:20:09 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*extract_word(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static const char	*advance_to_next(const char *s, char c)
{
	while (*s && *s != c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc((words + 1) * sizeof (char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i] = extract_word(s, c);
			i++;
			s = advance_to_next(s, c);
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	char **result;
	size_t i;

	const char *str = "Hola  Mundo  42  ";
	char delim = ' ';

	result = ft_split(str, delim);
	if (!result)
	{
		printf("Error al dividir la cadena.\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("Subcadena %zu: '%s'\n", i, result[i]);
		free(result[i]);  // Liberar cada subcadena
		i++;
	}
	free(result);  // Liberar el arreglo de subcadenas

	return (0);
}*/
