#include "libft.h"

int ft_strlen(const char *str)
{
	if (str == NULL)
		return 0;
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
