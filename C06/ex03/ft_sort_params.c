/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:04:22 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/28 21:04:48 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_greater(char *w1, char *w2)
{
	int		i;

	i = 0;
	while (w1[i] && w2[i])
	{
		if (w1[i] > w2[i])
			return (1);
		if (w1[i] < w2[i])
			return (0);
		i ++;
	}
	if (w1[i] && !w2[i])
		return (1);
	return (0);
}

void	my_sort(char **arr, int size)
{
	int		i;
	int		j;
	char	*temp;

	temp = NULL;
	if (size <= 1)
		return ;
	i = 0;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1 - i)
		{
			if (is_greater(arr[j], arr[j + 1]) == 1)
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i ++;
	}
}

void	print_arr(char **v)
{
	int	i;
	int	j;

	i = 1;
	while (v[i])
	{
		j = 0;
		while (v[i][j])
		{
			write(1, &v[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int c, char **v)
{
	if (c > 1)
	{
		my_sort(v, c);
		print_arr(v);
	}
	return (0);
}
