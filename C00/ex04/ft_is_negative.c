/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:02:10 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/18 19:11:56 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int num)
{
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	if (num < 0)
	{
		write(1, &n, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}
