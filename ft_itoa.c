/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:34:21 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:18:06 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	fill_number(char *str, long num, int len)
{
	len--;
	while (num > 10)
	{
		str[len] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	str[len] = (num + '0');
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = get_num_length(num);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	fill_number(str, num, len);
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char *str;

	str = ft_itoa(-12345);
	printf("Número convertido: %s\n", str);
	free(str);
	return (0);
}*/