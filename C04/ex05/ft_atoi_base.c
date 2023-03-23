/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:45:02 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/01 14:24:38 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	in_base(char c, char *b)
{
	int	i;

	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
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

int	get_num(char *str, char *b, int start, int base_len)
{
	long int	res;

	res = 0;
	while (str[start] && (in_base(str[start], b) > -1))
	{
		res = res + in_base(str[start], b);
		res = res * base_len;
		start++;
	}
	return (res / base_len);
}

int	ft_atoi_base(char *str, char *base)
{
	long int	res;
	int			i;
	int			base_len;
	int			sign;

	i = 0;
	sign = 1;
	base_len = check_base(base);
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
	res = get_num(str, base, i, base_len);
	return (res * sign);
}

/* #include <stdio.h>
int main()
{
	char *str = "    -+--100000";
	char *b = "01";
	printf("%i\n", ft_atoi_base(str, b));
	return 0;
}
 */
