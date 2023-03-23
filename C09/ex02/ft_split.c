/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:00:54 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/04 20:52:22 by melsahha         ###   ########.fr       */
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
	if (c == '\0')
		return (1);
	return (0);
}

int	get_size(char *str, char *charset)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && is_sep(str[i + 1], charset))
			size++;
		i++;
	}
	return (size);
}

void	init_word(char *word, char *str, int i, int j)
{
	int	k;

	k = 0;
	while (k < j && str[i + k])
	{
		word[k] = str[i + k];
		k++;
	}
	word[k] = '\0';
}

void	init_res(char **res, char *str, char *charset)
{
	int		i;
	int		j;
	int		r;

	r = 0;
	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			i++;
		else
		{
			j = 0;
			while (str[i + j] && !is_sep(str[i + j], charset))
				j++;
			res[r] = (char *) malloc(j + 1);
			init_word(res[r], str, i, j);
			r++;
			i = i + j;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**res;

	size = get_size(str, charset);
	res = (char **)malloc((size + 1) * sizeof(char *));
	res[size] = 0;
	init_res(res, str, charset);
	return (res);
}

/* #include <stdio.h>
int	main(void)
{
	char str[] = "hi";
	char sep[] = " ";
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
