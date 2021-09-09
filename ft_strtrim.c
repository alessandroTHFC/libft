#include "libft.h"

int	finder(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;	
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	while (finder(s1[i], set) == 1)
		i++;
	start = i;
	while (s1[i] != '\0')
		i++;
	i--;
	while (finder(s1[i], set) == 1)
		i--;
	len = i - start + 1;
	return (ft_substr(s1, start, len);
}
