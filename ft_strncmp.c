/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:08:25 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/11 12:08:32 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
/*#include <stdio.h>

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hellz";
	char str4[] = "Hel";
	unsigned int n = 4;

	printf("'Hello' y 'Hello' 4 carac.: %d\n", ft_strncmp(str1, str2, n));
	printf("'Hello' y 'Hellz' 4 carac.: %d\n", ft_strncmp(str1, str3, n));
	printf("'Hello' y 'Hel' 4 carac.: %d\n", ft_strncmp(str1, str4, n));
	printf("'Hello' y 'Hellz' 5 carac.: %d\n", ft_strncmp(str1, str3, 5));

	return (0);
}*/
