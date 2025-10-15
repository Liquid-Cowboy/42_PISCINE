#include "libft.h"
#include "stdio.h"

int	main(void)
{
	int	value1 = 42;
	int	value2 = 33;
	t_list *list = NULL;
	t_list *node1;
	t_list *node2;
/*
	====================================================
					testing ft_lstnew
	====================================================
*/
	printf("====================================================\n\t\ttesting ft_lstnew\n====================================================\n");
	node1 = ft_lstnew(&value1);
	node2 = ft_lstnew(&value2);
	printf("Ft_lstnew node1 content is: %d\n", *(int *)node1->content);
	printf("Ft_lstnew node2 content is: %d\n\n", *(int *)node2->content);
	
/*
	=======================================================
					testing ft_lstadd_front
	=======================================================
*/
	printf("=======================================================\n\t\ttesting ft_lstadd_front\n=======================================================\n");
	ft_lstadd_front(&list, node2);
	printf ("Node at root position shows: %d\n", *(int*)node2->content);
	ft_lstadd_front(&list, node1);
	printf ("Node at root position now shows: %d\n\n", *(int*)node1->content);

/*
	=====================================================
					testing ft_lstsize
	=====================================================
*/
	printf("=====================================================\n\t\ttesting ft_lstsize\n=====================================================\n");
	printf("List size is: %d\n\n", ft_lstsize(node1));

/*
 =====================================================
                 testing ft_lstlast
 =====================================================
*/
 printf("=====================================================\n\t\ttesting ft_lstlast\n=====================================================\n");
 printf("%d", *(int *)ft_lstlast(list)->content);

	return (0);

}
