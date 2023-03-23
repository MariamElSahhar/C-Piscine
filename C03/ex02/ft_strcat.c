/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:01:56 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/26 12:37:45 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		len;
	int		j;

	len = 0;
	j = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[j] != '\0')
	{
		dest[len + j] = src[j];
		j++;
	}
	dest[len + j] = '\0';
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char dest[200];
	char *src = "hi";
	printf("%s\n",ft_strcat(dest, src));
	return 0;
} */
