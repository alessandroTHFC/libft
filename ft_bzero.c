#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (!s)
		return ;
	while (n--)
		*str++ = 0;
}
