/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:49:00 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:20:30 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		new_str[i] = s2[i - len1];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*#include <stdio.h>

int	main(void)
{
	const char *str1 = "Hola, ";
	const char *str2 = "Mundo!";
	char *joined_str;

	// Concatenar las dos cadenas
	joined_str = ft_strjoin(str1, str2);
	if (!joined_str)
	{
		printf("Error al concatenar las cadenas.\n");
		return (1);
	}

	printf("Cadena concatenada: %s\n", joined_str);

	// Liberar la memoria asignada
	free(joined_str);

	return (0);
}*/
