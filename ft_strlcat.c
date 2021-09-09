#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dstsize;

	dstsize = 0;
	while (dest[dstsize] != '\0' && dstsize < size)
		dstsize++;
	i = dstsize;
	while (src[dstsize - 1] && dstsize + 1 < size)
	{
		dest[dstsize] = src[dstsize - i]
		dstsize++;
	}
	if (i < size)
		dest[dstsize] = '\0';
	return (i + ft_strlen(src));
}
