/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:07:06 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/29 12:02:00 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>

int	calc_size(int size, char **strs, char *sep)
{
	int		res;
	int		i;
	int		j;

	res = 0;
	i = 0;
	while (sep[i])
		i ++;
	res = i * (size - 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			res++;
			j++;
		}
		i++;
	}
	return (res + 1);
}

void	init_n(char *n, char **strs, char *sep, int total_size)
{
	int		i;
	int		j;
	int		l;

	i = 0;
	l = 0;
	while (i < total_size - 1)
	{
		j = 0;
		while (strs[l][j])
		{
			n[i] = strs[l][j];
			j++;
			i++;
		}
		l++;
		j = 0;
		while (i < total_size - 1 && sep[j])
		{
			n[i] = sep[j];
			j++;
			i++;
		}
	}
	n[total_size - 1] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*n;

	if (size == 0)
	{
		return ((char *) malloc (0));
	}
	total_size = calc_size(size, strs, sep);
	n = (char *) malloc (total_size);
	init_n(n, strs, sep, total_size);
	return (n);
}

/* int	main(void){
	char *sep;

	char *strs[4] = {"hello","this","is","string"};
	sep = "";
	char *n = ft_strjoin(4, strs, sep);
	printf("%s", n);
	printf("||");
	return 0;
}
 */
