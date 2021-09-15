#include "libft.h"

char	*ft_itoa(int n)
{
	char			*base;
	size_t			len;
	unsigned int	nbr;
	char			*ret;

	base = "0123456789";
	if (n < 0)
	{
		nbr = (unsigned int) -n;
		len = 2;
	}
	if (n > 0)
	{
		nbr = (unsigned int) n;
		len = 1;
	}
	while (nbr / 10 > 0)
		len++;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[len--] = 0;
	ret[len--] = base[nbr % 10];
	while (nbr / 10 > 10)
		ret[len--] = base[nbr % 10];
	if (n < 0)
		ret[0] = '-';
	return (ret);
}
