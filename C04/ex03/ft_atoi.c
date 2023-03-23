/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:31:36 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/28 13:04:01 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char a[] = "++++++1435";
	printf("%d\n", ft_atoi(a));
	// printf("%d\n", atoi(a));
	return 0;
}
 */
