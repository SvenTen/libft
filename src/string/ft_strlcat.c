#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_len = ft_strlen(src);
	size_t dst_len = ft_strlen(dst);
	size_t original_dst_len = dst_len;

	if (size == 0)
		return src_len;
	if (size <= dst_len)
		return size + src_len;

	while (dst_len < size - 1 && *src)
	{
		dst[dst_len++] = *src++;
	}
	dst[dst_len] = '\0';
	return src_len + original_dst_len;
}