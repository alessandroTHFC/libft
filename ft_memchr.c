#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	target;
	unsigned char	*source;

	i = 0;
	target = (unsigned char)c;
	source = (unsigned char *)s;
	while (i < n)
	{
		if (source[i] == target)
			return (source);
		i++;
	}
	return (NULL);
}
