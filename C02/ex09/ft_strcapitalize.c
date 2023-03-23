/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:53:51 by melsahha          #+#    #+#             */
/*   Updated: 2022/09/24 14:49:58 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowcase(char *c)
{
	if (*c <= 'Z' && *c >= 'A')
			*c += 32;
}

void	upcase(char *c)
{
	if (*c <= 'z' && *c >= 'a')
		*c -= 32;
}

void	capitalize(char *str, int start, int word_size)
{
	int		i;

	upcase(&str[start]);
	i = 1;
	while (i < word_size)
	{
		lowcase(&str[start + i]);
		i ++;
	}
}

int	is_alphanumeric(char *c)
{
	if (*c <= 'z' && *c >= 'a')
		return (1);
	if (*c <= 'Z' && *c >= 'A')
		return (1);
	if (*c <= '9' && *c >= '0')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		is_word;
	int		word_size;

	is_word = 0;
	word_size = 0;
	i = 0;
	while (str[i])
	{
		while (is_alphanumeric(&str[i]))
		{
			is_word = 1;
			word_size ++;
			i ++;
		}
		if (is_word)
		{
			capitalize(str, i - word_size, word_size);
			is_word = 0;
			word_size = 0;
		}
		i ++;
	}
	return (str);
}
