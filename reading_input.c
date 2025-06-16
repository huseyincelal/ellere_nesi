/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celal <celal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:52:03 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/16 16:00:26 by celal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <limits.h>

int	ft_atoi_similar(const char *str, t_stack *a, char **tmp)
{
	int			mod;
	long long	i;

	mod = 1;
	i = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mod = -1;
		str++;
	}
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_free(&a, tmp, 1);
		i = i * 10 + (*str - '0');
		str++;
	}
	if ((mod * i) > INT_MAX || (mod * i) < INT_MIN)
		ft_free(&a, tmp, 1);
	return (mod * i);
}

t_stack	*ft_sub_process(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi_similar(tmp[i], a, tmp);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_free(NULL, tmp, 1);
	free(tmp);
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc == 2)
		a = ft_sub_process(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi_similar(argv[i], a, NULL);
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}
