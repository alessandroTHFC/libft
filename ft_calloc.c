/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apangraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:48:25 by apangraz          #+#    #+#             */
/*   Updated: 2021/09/27 10:48:25 by apangraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*newmem;

	newmem = (void *)malloc(count * size);
	if (newmem == NULL)
		return (NULL);
	ft_bzero(newmem, count * size);
	return (newmem);
}
