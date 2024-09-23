/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:46:21 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:20:37 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < (dstsize -1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*#include <stdio.h>

int	main(void)
{
	char dst[20] = "Hola, ";
	const char src[] = "Mundo!";
	size_t result;

	// Probar ft_strlcat y mostrar el resultado
	result = ft_strlcat(dst, src, sizeof(dst));
	printf("Resultado de ft_strlcat: %s\n", dst);
	printf("Longitud total que se intentó crear: %zu\n", result);

	// Otro caso con buffer más pequeño
	char dst2[10] = "Hola";
	const char src2[] = " a todos!";
	result = ft_strlcat(dst2, src2, sizeof(dst2));
	printf("Resultado de ft_strlcat con buffer pequeño: %s\n", dst2);
	printf("Longitud total que se intentó crear: %zu\n", result);

	return (0);
}*/