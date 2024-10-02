#include "libft.h"
#include <stdio.h>

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
}
