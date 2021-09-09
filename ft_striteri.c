#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	pos;

	position = -1;
	while (s[++pos])
		f(pos, s + pos);
}