#include "libft.h"

int	ft_atoi(const char *str)
{
	int	value;
	int	posneg;

	value = 0;
	posneg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		posneg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		value = (value * 10) + (*str - '0');
		str++;
	}
	return (value * posneg);
}
