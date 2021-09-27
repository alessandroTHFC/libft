/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apangraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:48:27 by apangraz          #+#    #+#             */
/*   Updated: 2021/09/27 10:48:27 by apangraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle || !haystack)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i <= len - 1)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0'
				&& haystack[i + j] == needle[j] && i + j <= len - 1)
			{
				if (needle[j + 1] == '\0')
					return ((char *)(haystack + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
