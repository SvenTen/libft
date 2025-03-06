#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *temp_src = (unsigned char *)src;
	unsigned char *temp_dest = (unsigned char *)dest;

	while (n--)
	{
		*temp_dest++ = *temp_src++;
	}
	return (dest);
}