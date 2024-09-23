/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:36:41 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/10 16:36:44 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
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
		int converted = ft_tolower(test_chars[i]);
		printf("Original: '%c', Convertido: '%c'\n", test_chars[i], converted);
		i++;
	}
	return (0);
}*/
