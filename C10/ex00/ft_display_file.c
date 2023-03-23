/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:25:48 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/04 21:31:08 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

void	write_file(char *r)
{
	int	i;

	i = 0;
	while (r[i])
	{
		write(1, &r[i], 1);
		i++;
	}
}

int	main(int c, char **v)
{
	int		f;
	char	r[2000];

	if (c == 1)
	{
		write(2, "File name missing.\n", 20);
		return (0);
	}
	if (c > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (0);
	}
	f = open(v[1], O_RDONLY);
	if (f == -1)
	{
		write(2, "Cannot read file.\n", 19);
		return (0);
	}
	read(f, r, 2000);
	write_file(r);
	close(f);
}
