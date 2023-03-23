/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:40:08 by melsahha          #+#    #+#             */
/*   Updated: 2022/10/05 15:22:01 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*n;

	n = ft_create_elem(data);
	n->next = *begin_list;
	*begin_list = n;
}

#include <stdio.h>
int	main()
{
	int x = 1, y = 2, z = 3, n = 5;
	t_list *a = ft_create_elem(&x);
	t_list *b = ft_create_elem(&y);
	t_list *c = ft_create_elem(&z);
	a->next = b, b->next = c;
	t_list **start = a;
	ft_list_push_front(start, &n);

	printf("%d\n", **(int *)start->data);
	return (0);
}
