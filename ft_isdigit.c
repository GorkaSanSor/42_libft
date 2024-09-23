/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:54:23 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/09 14:54:25 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > '0' && c <= '9')
		return (c);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '0', '@', '5'};
	int i = 0;

	while (i < 5)
	{
		if (ft_isdigit(test_chars[i]))
			printf("El carácter '%c' es numerico.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es numerico.\n", test_chars[i]);
		i++;
	}
	return (0);
}*/
