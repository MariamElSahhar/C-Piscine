/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:53:36 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/02 18:46:49 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;

	size = 0;
	while (src[size])
		size++;
	str = (char *) malloc(size + 1);
	if (!str)
		return (0);
	str[size] = '\0';
	while (src[size - 1])
	{
		str[size - 1] = src[size - 1];
		size--;
	}
	return (str);
}

/* #include <stdio.h>
int main()
{
	char *b = "hello!";

	char *a = ft_strdup(b);
	printf("%s\n%s\n",b,a);
	return 0;
}
 */
