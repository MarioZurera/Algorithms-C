#include "list.h"

void	*ft_list_pop_front(t_list *list)
{
	void	*content;

	content = list->head->content;
	list->length--;
	if (list->length == 0)
		return (list->head = NULL, list->tail = NULL, content);
	list->head = list->head->next;
	free(list->head->prev);
	list->head->prev = NULL;
	return (content);
}
