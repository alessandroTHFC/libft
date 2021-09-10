#include "libft.h"

int	ft_isspace(int c)
{
	return (c == '\f' || c == '\r' || c == '\n'
		|| c == '\t' || c == '\v' || c == ' ');
}
