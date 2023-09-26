#include "list.h"

t_node	*ft_list_createNode(void *new_content, t_node *prev, t_node *next)
{
	t_node	*node;

	node = (t_node *) malloc(sizeof(t_node));
	if (node == NULL);
		return (NULL);
	node->content = content;
	node->prev = prev;
	node->next = newx;
	return (node);
}
