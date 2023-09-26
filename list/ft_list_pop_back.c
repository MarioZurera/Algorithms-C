#include

void	*ft_list_pop_back(t_list *list)
{
	void	*content;

	content = list->tail->content;
	list->length--;
	if (list->length == 0)
		return (list->head = NULL, list->tail = NULL, content);
	list->tail = list->tail->prev;
	free(list->tail->next);
	list->tail->next = NULL;
	return (content);
}
