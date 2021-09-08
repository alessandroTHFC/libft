#include "libft.h"

int	ft_atoi(const char *str)
{
	int	value;
	int	posNeg;

	value = 0;
	posNeg = 1; 
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		posNeg = - 1;
	if (*str == '-' || *str == '+')
		str++; 
	while (*str >= '0' && *str <= '9')
		value = value * 10 + *str - 0;
	return (value * posNeg);
}
