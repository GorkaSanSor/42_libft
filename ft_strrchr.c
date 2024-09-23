/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:43:04 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/19 12:41:28 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search_c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (*(str + i) == (char)search_c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
	const char *str = "Hello, World!";
	char search = 'o';
	char *result = ft_strrchr(str, search);

	if (result)
		printf("El texto a partir del carácter '%c' es: %s\n", search, result);
	else
		printf("Carácter '%c' no encontrado.\n", search);

	return (0);
}*/