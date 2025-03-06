#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *array = (unsigned char *)s;
	unsigned char v = (unsigned char)c;

	while (n--)
	{
		*array++ = v;
	}
	return s;
}