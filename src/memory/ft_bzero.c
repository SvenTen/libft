#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *array = (unsigned char *)s;

	while (n--)
	{
		*array++ = 0;
	}
}