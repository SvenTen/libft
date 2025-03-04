#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{

	unsigned char *d = (unsigned char *)dest;
	unsigned char *s = (unsigned char *)src;

	if (d > s && d < s + n)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}