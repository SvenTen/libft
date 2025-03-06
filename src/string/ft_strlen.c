#include "libft.h"

size_t ft_strlen(const char *str)
{
	if (str == NULL)
		return 0;
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
