/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:13:57 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/05 14:07:18 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 0 = name, 1 = op1, 2 = operator, 3 = op2
#include <unistd.h>
#include <stdio.h>

int		sub(int i, int j);
int		add(int i, int j);
int		mod(int i, int j);
int		mult(int i, int j);
int		div(int i, int j);
int		white_space(char c);
int		ft_atoi(char *str);
int		check_op(char *op);
void	ft_putnbr(int nbr);

void	by_zero_msg(int m)
{
	if (m == 3)
		write(1, "Stop : division by zero\n", 25);
	if (m == 5)
		write(1, "Stop : modulo by zero\n", 23);
}

void	print_res(int i, int j, int (*f[])(int, int), int id)
{
	int	res;

	if (id == 0)
	{
		write(1, "0\n", 2);
		return ;
	}
	if (j == 0 && (id == 3 || id == 5))
	{
		by_zero_msg (id);
		return ;
	}
	res = (*f[id - 1])(i, j);
	ft_putnbr(res);
	write(1, "\n", 1);
}

int	main(int c, char **v)
{
	int	i;
	int	j;
	int	(*f[5])(int, int);

	if (c != 4)
		return (0);
	f[0] = add;
	f[1] = sub;
	f[2] = div;
	f[3] = mult;
	f[4] = mod;
	i = ft_atoi(v[1]);
	j = ft_atoi(v[3]);
	print_res(i, j, f, check_op(v[2]));
	return (0);
}
