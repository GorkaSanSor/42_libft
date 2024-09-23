/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:18:17 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:20:43 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	len;
	size_t	i;

	if (!dest || !src)
		return (0);
	len = 0;
	while (src[len] != '\0')
		len++;
	if (destsize == 0)
		return (len);
	i = 0;
	while (i < destsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/*include <stdio.h>

int main(void)
{
	char src[] = "Hello, World!";
	char dest[6];

	ft_strlcpy(dest, src, sizeof(dest));
	printf("Destino: %s\n", dest);  // Imprime "Hello"

	return (0);
}*/