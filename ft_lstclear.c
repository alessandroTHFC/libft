#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*previous;

	if (lst == NULL)
		return ;
	list = *lst;
	while (list != NULL)
	{
		previous = list;
		list = list->next;
		ft_lstdelone(previous, del);
	}
	*lst = NULL;
}
