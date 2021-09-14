#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	while (dest[j] != '\0' && j < size)
		j++;
	while (src[k] && (j + k + 1) < size)
	{
		dest[j + k] = src[k];
		k++;
	}
	if (j < size)
		dest[j + k] = '\0';
	return (j + ft_strlen(src));
}
