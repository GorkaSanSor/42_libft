/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:35:13 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/09 15:35:17 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int main(void)
{
	char test_chars[] = {'A', 'z', '1', '@', '0', '5', 128};
	int i = 0;

	while (i < 7)
	{
		if (ft_isprint(test_chars[i]))
			printf("El carácter '%c' es imprimible.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es imprimible.\n", test_chars[i]);
		i++;
	}
	return (0);
}*/
