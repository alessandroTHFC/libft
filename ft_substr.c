#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*newStr;

	newStr = (char*)malloc(sizeof(*s) * (len + 1));
	if (newStr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			newStr[j] = s[i];
			j++;
		}
		i++;
	}
	newStr[j] = '\0';
	return (newStr);
}
