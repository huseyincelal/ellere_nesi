/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:02:46 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/18 09:46:16 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_position(t_stack *stack, int target)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->nbr == target)
			return (index);
		index++;
		stack = stack->next;
	}
	return (-1);
}

int	ft_find_place_a(t_stack *stack_a, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push < stack_a->nbr && nbr_push > ft_lstlast(stack_a)->nbr)
		i = 0;
	else if (nbr_push > ft_maxmin(stack_a, 1) || \
		nbr_push < ft_maxmin(stack_a, 0))
		i = ft_get_position(stack_a, ft_maxmin(stack_a, 0));
	else
	{
		tmp = stack_a->next;
		while (stack_a->nbr > nbr_push || tmp->nbr < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_b(t_stack *stack_b, int nbr_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (nbr_push > stack_b->nbr && nbr_push < ft_lstlast(stack_b)->nbr)
		i = 0;
	else if (nbr_push > ft_maxmin(stack_b, 1) || \
		nbr_push < ft_maxmin(stack_b, 0))
		i = ft_get_position(stack_b, ft_maxmin(stack_b, 1));
	else
	{
		tmp = stack_b->next;
		while (stack_b->nbr < nbr_push || tmp->nbr > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}
