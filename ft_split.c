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
 
char	**ft_split(const char *s, char c)
{
	int		i;
	int		start;
	int		end;
	char	**newstrs;

	newstrs = (char **)malloc(sizeof(char *) * (wordcounter(s, c) + 1));
	if (newstrs == NULL)
		return (NULL);
	end = 0;
	i = 0;
	while (s[end] != '\0')
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] != '\0' && s[end] != c)
			end++;
		if (end > start)
		{
			newstrs[i] = ft_strdup(s + start);
			i++;
		}
	}
	newstrs[i] = NULL;
	return (newstrs);
}
