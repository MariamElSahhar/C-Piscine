/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:56:39 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/27 15:58:34 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int c, char **v)
{
	int	i;
	int	j;

	j = c - 1;
	while (j > 0)
	{
		i = 0;
		while (v[j][i])
		{
			write(1, &v[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
