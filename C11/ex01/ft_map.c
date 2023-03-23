/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:56:40 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/05 11:02:07 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

/* int	plus_three(int i)
{
	return (i + 3);
} */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	res = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}

/* int	main(){
	int arr[] = {1,2,3,4,5};
	int *res;
	res = ft_map(arr, 5, &plus_three);
	for (int i = 0; i < 5; i ++)
		printf("%d\n", res[i]);
}
 */
