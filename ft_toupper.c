/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:45:44 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/09 15:45:47 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*#include <stdio.h>
int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '0', '@', '5'};
	int i = 0;

	while (i < 5)
	{
		int converted = ft_toupper(test_chars[i]);
		printf("Original: '%c', Convertido: '%c'\n", test_chars[i], converted);
		i++;
	}
	return (0);
}*/