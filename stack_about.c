/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_about.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:03:58 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/18 09:03:59 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

t_stack	*ft_stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
	{
		write (2, "Error\n", 6);
		exit(1);
	}
	new->nbr = content;
	new->next = NULL;
	return (new);
}

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lstlast(*stack))->next = stack_new;
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_stack *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	ft_maxmin(t_stack *a, int flag)
{
	int	value;

	if (flag == 0)
	{
		value = a->nbr;
		while (a)
		{
			if (a->nbr < value)
				value = a->nbr;
			a = a->next;
		}
		return (value);
	}
	else
	{
		value = a->nbr;
		while (a)
		{
			if (a->nbr > value)
				value = a->nbr;
			a = a->next;
		}
		return (value);
	}
}
