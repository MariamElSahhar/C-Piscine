/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:20:56 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/28 12:28:23 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

/* #include <stdio.h>
int main(){
	printf("%i\n", ft_recursive_factorial(2));
	return 0;
} */
