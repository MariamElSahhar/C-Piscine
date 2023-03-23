/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:28:26 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/28 12:56:37 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	res;

	res = nb;
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(res))
	{
		res++;
	}
	return (res);
}

/* #include <stdio.h>
int main()
{
	printf("%i\n", ft_find_next_prime(-2147483648));
	return 0;
}
 */
