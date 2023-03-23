/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:48:21 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/26 19:50:36 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

unsigned int	str_len(char *a)
{
	unsigned int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	j;

	len_d = str_len(dest);
	len_s = str_len(src);
	if (size == len_d)
		return (len_s + len_d);
	j = 0;
	while (j + len_d + 1 < size && src[j])
	{
		dest[len_d + j] = src[j];
		j++;
	}
	dest[len_d + j] = '\0';
	return (len_d + len_s);
}

/* int main()
{
	char *a = "abc";
	char b[5] = "1";
	char d[5] = "1";
	printf("%u\n",ft_strlcat(b, a, 3));
	printf("%lu\n", strlcat(d, a, 3));
	printf("%s\n", b);
	printf("%s\n", d);
	return 0;
} */
