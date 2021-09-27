/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apangraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 10:48:26 by apangraz          #+#    #+#             */
/*   Updated: 2021/09/27 10:48:26 by apangraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*list;

	if (*alst == 0)
	{
		*alst = new;
		return ;
	}
	list = *alst;
	while (list->next != 0)
		list = list->next;
	list->next = new;
	return ;
}
