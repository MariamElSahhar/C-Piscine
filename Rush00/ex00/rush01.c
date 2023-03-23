/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:45:32 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/18 18:31:50 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_row_0(int x);
void	write_row_1(int x);
void	write_row_2(int x);
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
		if (i == 1)
			write_row_0(x);
		else if (i == y)
			write_row_2(x);
		else if (i < y)
			write_row_1(x);
		i++;
	}
}

void	write_row_0(int x)
{
	int		j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			write(1, "/", 1);
		else if (j == x)
			write(1, "\\", 1);
		else if (j < x)
			write(1, "*", 1);
		j++;
	}
	write(1, "\n", 1);
}

void	write_row_1(int x)
{
	int		j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
			write(1, "*", 1);
		else if (j < x)
			write(1, " ", 1);
		j++;
	}
	write(1, "\n", 1);
}

void	write_row_2(int x)
{
	int		j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
			write(1, "\\", 1);
		else if (j == x)
			write(1, "/", 1);
		else if (j < x)
			write(1, "*", 1);
		j++;
	}
	write(1, "\n", 1);
}
