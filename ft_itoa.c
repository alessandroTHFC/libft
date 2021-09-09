#include "libft.h"

char	*ft_itoa(int n)
{
	char	base[] = "0123456789"
	size_t	len;
	unsigned int	nbr;
	char	*ret;

	if (n < 0)
		nbr = (unsigned int) -n;
	else
		nbr = (unsigned int) n;
	if (n < 0)
		len = 2;
	else
		len = 1;
	while ((nbr = nbr / 10) > 0)
		len++;
	ret = (char *)malloc((len + 1) * sizeof(char))
	if (ret == NULL)
		return (NULL);
	if (n < 0)
		nbr = (unsigned int) -n;
	else
		nbr = (unsigned int) n;
	ret[len--] = 0;
	ret[len--] = base[nbr % 10];
	while ((nbr = nbr / 10) > 10)
		ret[len--] = base[nbr % 10];
	if (n < 0)
		ret[0] = '-';
	return(ret);
}
