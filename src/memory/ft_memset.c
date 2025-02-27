#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *array = (unsigned char *)s;
	unsigned char v = (unsigned char)c;
	size_t i = 0;

	while (i < n)
	{
		array[i] = v;
		i++;
	}
	return s;
}