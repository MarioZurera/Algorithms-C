#include "list.h"

void	*ft_list_get(t_list *list, unsigned int index)
{
	int	i;
	t_node	*cur_node;


	if (index >= list->length)
		return (NULL);
	i = -1;
	cur_node = list->head;
	while (++i < index)
		cur_node = cur_node->next;
	return (cur_node->content);
}
