/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:16:44 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:20:17 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>

int	main(void)
{
	const char *str = "Hola, Mundo!";
	char *dup_str;

	dup_str = ft_strdup(str);
	if (!dup_str)
	{
		printf("Error en la duplicación de la cadena.\n");
		return (1);
	}

	printf("Cadena original: %s\n", str);
	printf("Cadena duplicada: %s\n", dup_str);

	// Liberar la memoria asignada
	free(dup_str);

	return (0);
}*/