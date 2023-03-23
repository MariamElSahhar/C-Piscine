/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:04:01 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/27 14:49:31 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 0;
	if (nb == 1)
		return (1);
	while (res <= nb / 2)
	{
		if (res * res == nb)
			return (res);
		if (res * res > nb)
			return (0);
		res ++;
	}
	return (0);
}

/* #include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(25));
	return 0;
} */
