/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:52:33 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:21:07 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*#include <stdio.h>

int	main(void)
{
	const char *str = "   Hola, Mundo!   ";
	const char *set = " ";

	char *trimmed_str = ft_strtrim(str, set);
	if (!trimmed_str)
	{
		printf("Error al recortar la cadena.\n");
		return (1);
	}

	printf("Cadena original: '%s'\n", str);
	printf("Cadena recortada: '%s'\n", trimmed_str);

	free(trimmed_str);

	return (0);
}*/