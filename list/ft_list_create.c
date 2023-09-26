#include "list.h"

t_list	*ft_list_create()
{
	t_list	*list;

	list = (t_list *) malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->length = 0;
	list->head = NULL;
	list->tail = NULL;
	return (list);
}
