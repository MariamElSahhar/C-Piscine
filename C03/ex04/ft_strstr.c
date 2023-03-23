/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:36:37 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/26 13:19:20 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		len;
	int		j;

	i = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			j++;
		}
		if (j == len)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/* int main()
{
	char *a = "a";
	char *b = "fafffakldfa";
	printf("%s\n",ft_strstr(b, a));
	printf("%s\n",strstr(b, a));
	return 0;
} */
