/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 10:05:25 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/15 11:00:15 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = strlen(s1);
	j = 0;
	while (s2[j])
	{
	s1[i] = s2[j];
	i++;
	j++;
	}
	s1[i] = '\0';

}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	len;
	char	*dest;

	i = 0;
	k = 0;
	while (strs[i])
	{
		len += strlen(strs[i]);
		i++;
	}
	dest = malloc(sizeof(int) * len);
	if (!dest)
		return (0);

	i = 0;
	while (strs[i])
	{
		strcat(dest, strs[i])
		i++;
	}
	
}

int	main(void)
{
	int	size = 3;
	char	**strs = {"Hello", "World", "42"};
	sep = ", ";
}
