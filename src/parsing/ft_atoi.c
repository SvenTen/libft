#include "libft.h"

int ft_atoi(const char *str)
{
	size_t i = 0;
	int result = 0;
	int isNegative = 0;

	while (ft_iswhite(str[i]))
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isNegative = 1;
		i++;
	}

	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}

	if (isNegative)
		result *= -1;

	return result;
}