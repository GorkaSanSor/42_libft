/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:10:40 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:17:37 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/*#include <stdio.h>

int	main(void)
{
	const char *str1 = "   123";
	const char *str2 = "   -456";
	const char *str3 = "789abc";
	const char *str4 = "   +42";
	const char *str5 = "abc123";

	printf("String: '%s' -> Int: %d\n", str1, ft_atoi(str1));  // 123
	printf("String: '%s' -> Int: %d\n", str2, ft_atoi(str2));  // -456
	printf("String: '%s' -> Int: %d\n", str3, ft_atoi(str3));  // 789
	printf("String: '%s' -> Int: %d\n", str4, ft_atoi(str4));  // 42
	printf("String: '%s' -> Int: %d\n", str5, ft_atoi(str5));  // 0

	return (0);
}*/