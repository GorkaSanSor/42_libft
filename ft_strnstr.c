/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:05:42 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/19 12:47:45 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*(needle + i) == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len && needle[j != '\0'])
			j++;
		if (needle[j] == '\0')
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char haystack[] = "Hola, Mundo!";
	const char needle1[] = "Mundo";
	const char needle2[] = "Tierra";
	const char needle3[] = "";

	// Caso 1: Buscar "Mundo" en "Hola, Mundo!" (encontrado)
	printf("Caso 1: %s\n", ft_strnstr(haystack, needle1, 12));

	// Caso 2: Buscar "Tierra" en "Hola, Mundo!" (no encontrado)
	printf("Caso 2: %s\n", ft_strnstr(haystack, needle2, 12));

	// Caso 3: Buscar cadena vacía (debe retornar haystack)
	printf("Caso 3: %s\n", ft_strnstr(haystack, needle3, 12));

	// Caso 4: Buscar "Mundo" en los primeros 5 caracteres de 
	//"Hola, Mundo!" (no encontrado)
	printf("Caso 4: %s\n", ft_strnstr(haystack, needle1, 5));

	return (0);
}*/