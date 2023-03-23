/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:10:40 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/05 14:14:52 by melsahha         ###   ########.fr       */
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

int	tab_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != 0)
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		size;
	char	*temp;

	size = tab_size(tab);
	temp = NULL;
	if (size <= 1)
		return ;
	i = 0;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - 1 - i)
		{
			if (is_greater(tab[j], tab[j + 1]) == 1)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i ++;
	}
}

/* void	print_arr(char **v)
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
		ft_sort_string_tab(v);
		print_arr(v);
	}
	return (0);
}
 */
