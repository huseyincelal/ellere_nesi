/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celal <celal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 06:58:50 by hugozlu           #+#    #+#             */
/*   Updated: 2025/06/16 16:18:45 by celal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	long			nbr;
	struct s_stack	*next;
}	t_stack;

void		ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack		*ft_stack_new(int content);
int			ft_recurring(t_stack *a);
void		ft_free(t_stack **a, char **arr, int show_error);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_ra(t_stack **a);
void		ft_rb(t_stack **b);
void		ft_sa(t_stack **a);
void		ft_pa(t_stack **a, t_stack **b);
void		ft_pb(t_stack **stack_a, t_stack **stack_b);
void		ft_rra(t_stack **a);
void		ft_rr(t_stack **a, t_stack **b);
void		ft_rrr_sub(t_stack **b);
void		ft_rrr(t_stack **a, t_stack **b);
int			ft_lstsize(t_stack *lst);
int			ft_maxmin(t_stack *a, int flag);
int			ft_find_index(t_stack *a, int nbr);
int			ft_find_place_b(t_stack *stack_b, int nbr_push);
int			ft_find_place_a(t_stack *a, int nbr);
void		ft_sort(t_stack **stack_a);
int			ft_checksorted(t_stack *stack_a);
void		ft_sort_three(t_stack **stack_a);
int			ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rarb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb(t_stack *a, t_stack *b, int c);
int			ft_rotate_type_ab(t_stack *a, t_stack *b);
int			ft_rotate_type_ba(t_stack *a, t_stack *b);
int			ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
void		ft_rrb(t_stack **b);
t_stack		*ft_process(int argc, char **argv);
t_stack		*ft_sub_process(char **argv);

#endif