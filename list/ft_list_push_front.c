#include "list.h"

void	ft_list_push_front(t_list *list, void *new_content)
{
	t_node	*old_head;

	list->head = ft_list_createNode(new_content, NULL, old_head);
	if (list->head == NULL)
		list->head = old_head;
	else
		list->length++;
	if (list->tail == NULL)
		list->tail = list->head;
	else if (list->head != old_head)
		old_head->prev = list->head;
}
