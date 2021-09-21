#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*newmem;

	newmem = (void *)malloc(count * size);
	if (newmem == NULL)
		return (NULL);
	ft_bzero(newmem, count * size);
	return (newmem);
}
