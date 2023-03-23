/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:30:45 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/18 19:11:26 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nums(int a, int b)
{
	char	n[2];
	char	m[2];

	n[0] = '0' + a / 10;
	n[1] = '0' + a % 10;
	m[0] = '0' + b / 10;
	m[1] = '0' + b % 10;
	write(1, n, 2);
	write(1, " ", 1);
	write(1, m, 2);
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 100)
	{
		b = 0;
		while (b < 100)
		{
			if (a < b)
			{
				print_nums(a, b);
			}
			b++;
		}
		a++;
	}
}
