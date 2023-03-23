/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:19:53 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/02 19:16:03 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	res;
	int	i;
	int	*arr;

	*range = 0;
	if (min >= max)
		return (0);
	res = max - min;
	arr = (int *) malloc(sizeof(int) * res);
	if (!arr)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (res);
}

/* int main()
{
	int *arr;
	int min, max, res;

	min = 1;
	max = 10;
	res = ft_ultimate_range(&arr, min, max);
	printf("%d\n", res);
	for (int k = 0; k < max - min; k++)
		printf("%d ", arr[k]);
	return 0;
} */
