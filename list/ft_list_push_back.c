#include "list.h"

void	ft_list_push_back(t_list *list, void *new_content)
{
	t_node	*old_tail;

	list->tail = ft_list_createNode(new_content, old_tail, NULL);
	if (list->tail == NULL)
		list->tail = old_tail;
	else
		list->length++;
	if (list->head == NULL)
		list->head = list->tail;
	else if (list->tail != old_tail)
		old_tail->next = list->tail;
}
