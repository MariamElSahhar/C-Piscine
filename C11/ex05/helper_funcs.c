/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:54:03 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/05 13:57:37 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	white_space(char c)
{
	if (c == 32 || c == 9 || c == 10 || c == 11 || c == 12 || c == 13)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	while (white_space(str[i]))
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	res = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		res = res * 10 + (int) str[i] - 48;
		i++;
	}
	return (sign * res);
}

int	check_op(char *op)
{
	int	i;

	i = 0;
	while (op[i])
		i++;
	if (i != 1)
		return (0);
	if (op[0] == '+')
		return (1);
	if (op[0] == '-')
		return (2);
	if (op[0] == '/')
		return (3);
	if (op[0] == '*')
		return (4);
	if (op[0] == '%')
		return (5);
	return (0);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}
