/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:55:38 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/09 11:55:51 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '1', '@'};
	int i = 0;

	while (i < 4)
	{
		if (ft_isalpha(test_chars[i]))
			printf("El carácter '%c' es alfabético.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es alfabético.\n", test_chars[i]);
		i++;
	}
	return (0);
}*/