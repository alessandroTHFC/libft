#include "libft.h"

int	wordcounter(const char *str, char c)
{
	int	words;
	int	control;

	words = 0;
	control = 0;
	while (*str)
	{
		if (*str != c && control == 0)
		{
			control = 1;
			words++;
		}
		else if (*str == c)
			control = 0;
		str++;
	}
	return (words);
}

static char	*ft_strndup(const char *s, int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_memcpy(str, s, n);
	return (str);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**newstrs;

	newstrs = (char **)malloc(sizeof(char *) * (wordcounter(s, c) + 1));
	if (newstrs == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			newstrs[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	newstrs[k] = NULL;
	return (newstrs);
}
