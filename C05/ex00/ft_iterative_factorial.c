/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:24:38 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/28 12:26:51 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

/* #include <stdio.h>
int main(){
	printf("%i\n", ft_iterative_factorial(2));
	return 0;
}
 */
