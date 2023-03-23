/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:57:08 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/26 12:52:34 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i ++;
	}
	if (s1[i] && !s2[i] && i < n)
		return ((unsigned char)s1[i]);
	if (s2[i] && !s1[i] && i < n)
		return (0 - (unsigned char)s2[i]);
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main()
{
	char *a = "12349";
	char *b = "12345";
	printf("%d\n",ft_strncmp(a, b, 5));
	printf("%d\n",strncmp(a, b, 5));
	return 0;
} */
