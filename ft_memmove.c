#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return(dst);
	if (dst > src)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*dst++ = *s++;
	return(dst);
}
