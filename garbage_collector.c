#include <stdlib.h> 

typedef struct		s_gc
{
	void	*ptr;
	void	*next;
}		t_gc;

void	*alloc_gc(int size, int size_type, t_gc **curr_gc)
{
	t_gc	*new_gc;

	if (!(new_gc = malloc(sizeof(t_gc))))
		return (NULL);
	new_gc->next = NULL;
	(*curr_gc)->next = new_gc;
	(*curr_gc) = new_gc;
	if (!(new_gc->ptr = malloc(size_type * size)))
		return (NULL);
	return (new_gc->ptr);
}

int	free_gc(t_gc *head_gc)
{
	t_gc	*tmp;

	tmp = head_gc;
	while (head_gc)
	{
		head_gc = head_gc->next;
		if (tmp->ptr)
			free(tmp->ptr);
		free(tmp);
		tmp = head_gc;
	}
	return (0);
}
