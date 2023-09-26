#include "list.h"

void	ft_list_clear(t_list *list, void (*del)(void *))
{
	t_node	*cur_node;

	cur_node = list->head;
	while (cur_node != NULL)
	{
		del(cur_node->content);
		list->head = cur_node->next;
		free(cur_node);
		cur_node = list->head;
	}
	free(list);
}
