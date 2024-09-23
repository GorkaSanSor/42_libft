/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:04:29 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:21:14 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*#include <stdio.h>

int	main(void)
{
	const char *str = "Hola, Mundo!";
	char *sub;

	// Extraer "Mundo" desde el índice 6, con longitud máxima de 5 caracteres
	sub = ft_substr(str, 6, 5);
	if (!sub)
	{
		printf("Error al extraer la subcadena.\n");
		return (1);
	}

	printf("Subcadena extraída: %s\n", sub);

	// Liberar la memoria asignada
	free(sub);

	return (0);
}*/
