/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:49:39 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/19 10:35:31 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*#include <stdio.h>

int main(void)
{
    const char *mensaje = "Hola, mundo!";
    int length = ft_strlen(mensaje);

    printf("La longitud de '%s' es: %d\n", mensaje, length);

    return 0;
}*/