/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:06:04 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/03 20:02:27 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			in_base(char c, char *b);
int			base_check(char *base);
long int	get_dec(char *str, char *b, int start, int base_len);
int			get_str_size(long int dec, int b);
void		get_str(char *str, long int dec, char *base_to, int c);

long int	ft_atoi_base(char *str, char *base)
{
	long int	dec;
	int			base_len;
	int			sign;
	int			i;

	base_len = base_check(base);
	sign = 1;
	i = 0;
	if (base_len == 0)
		return (0);
	while (str[i] && (str[i] < 33 || str[i] > 126))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign = sign * -1;
		}
		i++;
	}
	dec = get_dec(str, base, i, base_len);
	return (dec * sign);
}

char	*get_str_base(long int dec, char *base_to)
{
	int		b_size;
	int		str_size;
	char	*str;
	int		s;

	b_size = base_check(base_to);
	if (b_size == 0)
		return (0);
	str_size = get_str_size(dec, b_size);
	if (dec < 0)
	{
		str = (char *)malloc(str_size + 2);
		str[0] = '-';
		s = 1;
	}
	else
	{
		str = (char *)malloc(str_size + 1);
		s = 0;
	}
	if (!str || str_size == 0)
		return (0);
	get_str(str, dec, base_to, str_size + s);
	str[str_size + s] = '\0';
	return (str);
}

char	*ft_convert_base(char *nbr_in, char *base_from, char *base_to)
{
	char		*str_out;
	long int	dec;

	if (!base_check(base_from) || !base_check(base_to))
		return (0);
	dec = ft_atoi_base(nbr_in, base_from);
	if (dec < -2147483648 || dec > 2147483647)
		return (0);
	str_out = get_str_base(dec, base_to);
	return (str_out);
}

/* #include <stdio.h>
int	main(void)
{
	char *nbr_in, *base_from, *base_to;

	nbr_in = "0123";
	base_from = "0123456789";
	base_to = "0123456789abcdef";
	printf("%s\n", ft_convert_base(nbr_in, base_from, base_to));
	return (0);
} */
