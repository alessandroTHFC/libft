#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*newmem;

	newmem = (void *)malloc(count * size);
	if (newMem == NULL)
		return (NULL);
	ft_bzero(s, count * size);
	return (newmem);
}
