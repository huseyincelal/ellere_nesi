/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celal <celal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:11:36 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/16 16:21:55 by celal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	if (ft_maxmin(*stack_a, 0) == (*stack_a)->nbr)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (ft_maxmin(*stack_a, 1) == (*stack_a)->nbr)
	{
		ft_ra(stack_a);
		if (!ft_checksorted(*stack_a))
			ft_sa(stack_a);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_maxmin(*stack_a, 1)) == 1)
			ft_rra(stack_a);
		else
			ft_sa(stack_a);
	}
}
