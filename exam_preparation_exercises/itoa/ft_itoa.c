#include <stdlib.h>

int	count_nbr_base(int n);
int	ft_putnbr(char *dest, int nbr, int i);
char	*ft_itoa(int nbr);

int	count_nbr_base(int n)
{
	int	count = 0;
	long	num = 0;

	if (n < 0)
	{
		count++;
		num = -(long)n;
	}
	else
		num = (long)n;
	while (num > 9)
	{
		count++;
		num /= 10;
	}
	return (count + 1);
}

int	ft_putnbr(char *dest, int nbr, int i)
{
	long	n;

	if (nbr < 0)
	{
		dest[i] = '-';
		n = -(long)nbr;
		i++;
	}
	else
		n = (long)nbr;
	if (n < 10)
		dest[i] = n + 48;
	if (n > 9)
		i = ft_putnbr(dest, n / 10, i);
	dest[i++] = n % 10 + 48;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(987));
	return (0);
}

char	*ft_itoa(int nbr)
{
	int	i = 0;
	int	n = nbr;
	char	*dest;
	int	count = count_nbr_base(n);

	dest = malloc(sizeof(char) * count + 1);
	if (!dest)
		return (NULL);
	i = ft_putnbr(dest, nbr, i);
	dest[i] = '\0'; 
	return (dest);
}
