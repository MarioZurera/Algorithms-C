#include "list.h"

t_list	*ft_sublist(t_list *list, int start, int length, void (*del)(void *))
{
	int	i;
	t_list	*new_list;
	t_node	*cur_node;
	t_node	*new_node;

	new_list = ft_list_create();
	if (new_list == NULL)
		return (NULL);
	new_list->length = length;
	new_list->head = NULL;
	new_list->tail = NULL;
	while (--start)
		cur_node = cur_node->next;
	while (--length && cur_node != NULL)
	{
		new_node = ft_list_push_back(cur_node->content);
		if (new_node == NULL)
			return (ft_list_clear(new_list, del), NULL);
		cur_node = cur_node->next;
	}
	return (new_list);
}
