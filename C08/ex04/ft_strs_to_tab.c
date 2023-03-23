/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:13:57 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/02 13:32:24 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*copy_str(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*stock;

	stock = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (0);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		stock[i].size = j;
		stock[i].str = av[i];
		stock[i].copy = (char *)malloc(j + 1);
		if (!stock[i].copy)
			return (0);
		copy_str(stock[i].copy, stock[i].str);
		i++;
	}
	stock[i].size = 0;
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}

/* #include <stdio.h>
int	main(void)
{
	int	c = 3;
	char *v[] = {"Hello", "Hiii", "Heyy"};
	struct s_stock_str	*s;
	s = ft_strs_to_tab(c, v);

	for (int i = 0; i <= c; i++) {
		printf("index: %i, size: %i, ", i, s[i].size);
		printf("contents: %s, copy: %s\n", s[i].str, s[i].copy);
	}
	free(s);
	return (0);
} */
