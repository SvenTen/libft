#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *temp_src = (unsigned char *)src;
	unsigned char *temp_dest = (unsigned char *)dest;

	size_t i = 0;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}