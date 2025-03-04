#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len = ft_strlen(src);

	if (size == 0)
		return src_len;
	if (src[0] == '\0')
	{
		dst[0] = '\0';
		return 0;
	}
	while (--size && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return src_len;
}