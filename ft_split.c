#include "libft.h"

int	wordCounter(char const *str, char c)
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

//write strndrup or it will be read from the library? 

char	**ft_split(char const *s, char c)
{
	int	i;
	int	start;
	int	end;
	char	**newStrs

	newStrs = (char **)malloc(sizeof(char *) * (wordCounter(s, c) + 1));
	if (newStrs == NULL)
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
			newStrs[i] = ft_strndup(s + start, end - start);
			i++;
		}
	}
	newStrs[i] = NULL;
	return (newStrs);
}
