/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:39:31 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/03 20:27:08 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_size(char *str, char *charset)
{
	int	size;
	int	i;
	int	j;

	size = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && !is_sep(str[i], charset))
			i++;
		if (str[i] && is_sep(str[i], charset))
		{
			j = 1;
			while (str[i + j] && !is_sep(str[i + j], charset))
				j++;
			if (j > 1 && str[i + j] && is_sep(str[i + j], charset))
			{
				size++;
				i = i + j - 1;
			}
		}
		i++;
	}
	return (size);
}

void	init_word(char *word, char *str, int i, int j)
{
	int	k;

	k = 0;
	while (k < j - 1 && str[i + k])
	{
		word[k] = str[i + k];
		k++;
	}
	word[k] = '\0';
}

void	init_res(char **res, char *str, char *charset, int size)
{
	int		i;
	int		r;
	int		j;

	i = 0;
	r = 0;
	while (str[i] && r < size)
	{
		while (str[i] && !is_sep(str[i], charset))
			i++;
		if (str[i] && is_sep(str[i], charset))
		{
			j = 1;
			while (str[i + j] && !is_sep(str[i + j], charset))
				j++;
			if (j > 1 && str[i + j] && is_sep(str[i + j], charset))
			{
				res[r] = (char *) malloc(j);
				init_word(res[r], str, i + 1, j);
				r++;
				i = i + j - 1;
			}
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**res;

	size = 0;
	while (charset[size])
		size++;
	if (!size)
	{
		res = (char **)malloc(2 * sizeof(char *));
		size = 0;
		while (str[size])
			size++;
		res[0] = (char *)malloc(size + 1);
		init_word(res[0], str, 0, size);
		res[1] = 0;
		return (res);
	}
	size = get_size(str, charset);
	res = (char **)malloc((size + 1) * sizeof(char *));
	if (!res)
		return (0);
	init_res(res, str, charset, size);
	res[size] = 0;
	return (res);
}

/* #include <stdio.h>
int	main(void)
{
	char str[] = "Hello, this, is, a, string of characters,";
	char sep[] = ", ";
	char **res = ft_split(str, sep);
	int i = 0;
	while(res[i])
	{
		printf("%s\n", res[i]);
		i ++;
	}
	printf("%s\n", res[i]);


	return (0);
} */
