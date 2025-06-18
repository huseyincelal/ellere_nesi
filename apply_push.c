/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:02:13 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/18 17:32:07 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c && ft_find_place_b(*b, c) > 0)
			ft_rr(a, b);
		while ((*a)->nbr != c)
			ft_ra(a, 1);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b, 1);
		ft_pb(a, b);
		return (-1);
	}
	while ((*b)->nbr != c && ft_find_place_a(*a, c) > 0)
		ft_rr(a, b);
	while ((*b)->nbr != c)
		ft_rb(b, 1);
	while (ft_find_place_a(*a, c) > 0)
		ft_ra(a, 1);
	ft_pa(a, b);
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c && ft_find_place_b(*b, c) > 0)
		{
			ft_rra(a, 0);
			ft_rrb(b, 0);
		}
		while ((*a)->nbr != c)
			ft_rra(a, 1);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b, 1);
		ft_pb(a, b);
		return (-1);
	}
	while ((*b)->nbr != c && ft_find_place_a(*a, c) > 0)
	{
		ft_rra(a, 0);
		ft_rrb(b, 0);
	}
	while ((*b)->nbr != c)
		ft_rrb(b, 1);
	while (ft_find_place_a(*a, c) > 0)
		ft_rra(a, 1);
	ft_pa(a, b);
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			ft_rra(a, 1);
		while (ft_find_place_b(*b, c) > 0)
			ft_rb(b, 1);
		ft_pb(a, b);
		return (-1);
	}
	while (ft_find_place_a(*a, c) > 0)
		ft_rra(a, 1);
	while ((*b)->nbr != c)
		ft_rb(b, 1);
	ft_pa(a, b);
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != c)
			ft_ra(a, 1);
		while (ft_find_place_b(*b, c) > 0)
			ft_rrb(b, 1);
		ft_pb(a, b);
		return (-1);
	}
	while (ft_find_place_a(*a, c) > 0)
		ft_ra(a, 1);
	while ((*b)->nbr != c)
		ft_rrb(b, 1);
	ft_pa(a, b);
	return (-1);
}
