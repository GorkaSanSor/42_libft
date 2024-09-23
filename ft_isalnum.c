/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:07:42 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/09 15:07:45 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	else if (c >= '0' && c <= '9')
		return (c);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '1', '@', '0', '5'};
	int i = 0;

	while (i < 6)
	{
		if (ft_isalnum(test_chars[i]))
			printf("El carácter '%c' es alfanumérico.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es alfanumérico.\n", test_chars[i]);
		i++;
	}
	return (0);
}*/
