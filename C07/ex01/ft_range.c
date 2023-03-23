/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:03:40 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/30 18:45:06 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (0);
	res = (int *) malloc((max - min) * 4);
	i = 0;
	while (i < (max - min))
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}

/* #include <stdio.h>
int main()
{
	int *arr;
	int min, max;
	min = 5;
	max = 10;
	arr = ft_range(min, max);
	for(int i = 0; i < (max - min); i++)
		printf("%d ", arr[i]);
	printf("\n");
} */
