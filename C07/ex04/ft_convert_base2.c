/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:39:31 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/03 20:00:44 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	in_base(char c, char *b)
{
	int	index;

	index = 0;
	while (b[index])
	{
		if (c == b[index])
			return (index);
		index++;
	}
	return (-1);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 33)
			return (0);
		if (base[i] == '/' || base[i] == '*' || base[i] == '%')
			return (0);
		if (base[i] == '.' || base[i] == ',' || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

long int	get_dec(char *str, char *b, int start, int base_len)
{
	long int	dec;

	dec = 0;
	while (str[start] && (in_base(str[start], b) > -1))
	{
		dec = dec + in_base(str[start], b);
		dec = dec * base_len;
		start++;
	}
	return (dec / base_len);
}

int	get_str_size(long int dec, int b)
{
	long int	i;

	i = 0;
	if (dec == 0)
		return (1);
	if (dec < 0)
		dec = dec * -1;
	while (dec > 0)
	{
		dec = dec / b;
		i++;
	}
	return (i);
}

void	get_str(char *str, long int dec, char *base_to, int c)
{
	int	i;
	int	b;

	b = base_check(base_to);
	i = 0;
	if (dec < 0)
	{
		i++;
		dec = dec * -1;
	}
	while (c - 1 >= i)
	{
		str[c - 1] = base_to[dec % b];
		dec = dec / b;
		c--;
	}
}
