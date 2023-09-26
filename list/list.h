#ifndef LIST_H
# define LIST_H

typedef struct s_node
{
	void		*content;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_list
{
	size_t	length;
	t_node	*head;
	t_node	*tail;
}	t_list;


t_node	ft_list_createNode(void *content, t_node *prev, t_node *next);
t_list	*ft_list_create();
// t_list	*ft_list_create_from_array(t_array array);
void	*ft_list_get(t_list *list, unsigned int index);
void	ft_list_insert(t_list *list, unsigned int index, void *new_content, void (*del)(void *));
void	ft_list_push_front(t_list *list, void *new_content);
void	*ft_list_pop_front(t_list *list);
void	ft_list_push_last(t_list *list, void *mew_content);
void	*ft_lits_pop_last(t_list *list);
void	ft_list_clear(t_list *list, void (*del)(void *));
t_list	*ft_sublist(t_list *list, int start_index, int length, void (*del)(void *));

#endif /* LIST_H */
