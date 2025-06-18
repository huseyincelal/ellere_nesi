/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugozlu <hugozlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 09:02:55 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/18 15:28:42 by hugozlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_checksorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->nbr;
	while (stack_a)
	{
		if (i > stack_a->nbr)
			return (0);
		i = stack_a->nbr;
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_free(t_stack **a, char **arr, int show_error)
{
	t_stack	*tmp;

	if (arr)
		while (*arr)
			free(*arr++);
	if (a && *a)
	{
		while (*a)
		{
			tmp = (*a)->next;
			free(*a);
			*a = tmp;
		}
	}
	if (show_error)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int	ft_recurring(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc == 1)
		return (0);
	a = ft_process(argc, argv);
	if (ft_recurring(a) || !a)
		ft_free(&a, NULL, 1);
	if (!ft_checksorted(a))
		ft_sort(&a);
	ft_free(&a, NULL, 0);
	return (0);
}
