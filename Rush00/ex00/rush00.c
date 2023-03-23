/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:45:32 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/18 18:33:09 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_row(int x, int t);
void	rush(int x, int y);

void	rush(int x, int y)
{
	int		i;

	i = 1;
	if (y <= 0 || x <= 0)
	{
		write (2, "Invalid input", 13);
		return ;
	}
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			write_row(x, 0);
		}
		else
		{
			write_row(x, 1);
		}
		i++;
	}
}

void	write_row(int x, int t)
{
	int		j;

	j = 1;
	while (j <= x)
	{
		if (t == 0)
		{
			if (j == 1 || j == x)
				write(1, "o", 1);
			else
				write(1, "-", 1);
		}
		else
		{
			if (j == 1 || j == x)
				write(1, "|", 1);
			else
				write(1, " ", 1);
		}
		j++;
	}
	write(1, "\n", 1);
}
