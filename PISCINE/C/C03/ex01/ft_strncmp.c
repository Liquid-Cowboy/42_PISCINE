/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnogueir <mnogueir@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:07:56 by mnogueir          #+#    #+#             */
/*   Updated: 2025/09/09 10:21:39 by mnogueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n < 1)
		return (0);
	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < n - 1))
		i++;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	int	n = 3;
	char	*s1 = "abcdefgh";
	char	*s2 = "abcdefgh";
	printf("%d", ft_strncmp(s1, s2, n));
	s1 = "abcdefgh";
        s2 = "abcdffgh";
        printf("\n%d", ft_strncmp(s1, s2, n));
	s1 = "abcdffgh";
        s2 = "abcdefgh";
        printf("\n%d", ft_strncmp(s1, s2, n));

}
*/
