int	max(int* tab, unsigned int len)
{
	int	i = 0;
	int	j = tab[0];

	if (len == 0)
		return (0);
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
			j = tab[i + 1];
		i++;
	}
	return (j);
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {1, 6, 2, 8, 1};
	printf("%d", max(tab, 0));
	return (0);
}*/
