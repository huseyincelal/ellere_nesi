/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celal <celal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:05:12 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/15 06:43:25 by celal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->nbr))
			i = ft_case_rarb_a(a, b, tmp->nbr);
		if (i > ft_case_rrarrb_a(a, b, tmp->nbr))
			i = ft_case_rrarrb_a(a, b, tmp->nbr);
		if (i > ft_case_rarrb_a(a, b, tmp->nbr))
			i = ft_case_rarrb_a(a, b, tmp->nbr);
		if (i > ft_case_rrarb_a(a, b, tmp->nbr))
			i = ft_case_rrarb_a(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->nbr);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->nbr))
			i = ft_case_rarb(a, b, tmp->nbr);
		if (i > ft_case_rrarrb(a, b, tmp->nbr))
			i = ft_case_rrarrb(a, b, tmp->nbr);
		if (i > ft_case_rarrb(a, b, tmp->nbr))
			i = ft_case_rarrb(a, b, tmp->nbr);
		if (i > ft_case_rrarb(a, b, tmp->nbr))
			i = ft_case_rrarb(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}
