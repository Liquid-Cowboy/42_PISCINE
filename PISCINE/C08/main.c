#include "ft_stock_str.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_stock_str	*tab;

	tab = ft_strs_to_tab(argc, argv);
	if (tab == NULL)
		return (1);
	ft_show_tab(tab);
	return (0);
}
