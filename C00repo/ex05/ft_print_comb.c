/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:43:10 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/18 19:11:31 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int a, int b, int c)
{
	char	p[3];

	p[0] = '0' + a;
	p[1] = '0' + b;
	p[2] = '0' + c;
	write(1, p, 3);
	if (a != 7 || b != 8 || c != 9)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				if (a < b && b < c)
				{
					print_num(a, b, c);
				}
				c++;
			}
			c = 2;
			b++;
		}
		b = 1;
		a++;
	}
}
