#include "libft.h"

{
	size_t	i;

	i = 0;
	if (src == NULL || dst == NULL)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] ='\0';
	return (ft_strlen(src));
}
