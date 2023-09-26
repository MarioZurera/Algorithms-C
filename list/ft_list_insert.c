#include "list.h"

void	ft_list_insert(t_list *list, unsigned int index, void *new_content, void (*del)(void *))
{
	int	i;
	t_node	*cur_node;

	if (index >= data->length)
		return ;
	cur_node = list->head;
	i = -1;
	while (++i < index)
		cur_node = cur_node->next;
	if (del != NULL)
		del(cur_node->content);
	cur_node->content = new_content;
}
