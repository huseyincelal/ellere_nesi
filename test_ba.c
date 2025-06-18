/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:03:50 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/18 09:23:00 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_a(a, c);
	if (i < ft_get_position(b, c))
		i = ft_get_position(b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_lstsize(a) - ft_find_place_a(a, c);
	if ((i < (ft_lstsize(b) - ft_get_position(b, c))) && ft_get_position(b, c))
		i = ft_lstsize(b) - ft_get_position(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_get_position(b, c))
		i = ft_lstsize(b) - ft_get_position(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_lstsize(a) - ft_find_place_a(a, c);
	i = ft_get_position(b, c) + i;
	return (i);
}
