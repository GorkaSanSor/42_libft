/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:41:24 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/10 16:41:28 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search_c)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == (char)search_c)
			return ((char *)(str + i));
		i++;
	}
	if ((char)search_c == '\0')
		return ((char *)str + i);
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	const char *str = "Hello, World!";
	char search = 'o';
	char *result = ft_strchr(str, search);

	if (result)
		printf("El texto a partir del carácter '%c' es: %s\n", search, result);
	else
		printf("Carácter '%c' no encontrado.\n", search);

	return (0);
}*/