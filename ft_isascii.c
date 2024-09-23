/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:39:30 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/19 10:40:28 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '1', '@', '0', '5', 128};
	int i = 0;

	while (i < 7)  // Iterar sobre los 7 caracteres (añadí un carácter no ASCII)
	{
		if (ft_isascii(test_chars[i]))
			printf("El carácter '%c' es ASCII.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es ASCII.\n", test_chars[i]);
		i++;
	}
	return (0);
}*/
