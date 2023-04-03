/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_manager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:17:46 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/03 16:33:04 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
t_list_a *ft_algo_manager(t_list_a *la, t_list_b *lb)
{
	t_list_a *tmpa;

	tmpa = la;
	(void)lb;
	ft_algo_3(tmpa);
	return (tmpa);
}*/

// 5 6 8 good car de base
// 5 8 6 good
// 6 5 8 
// 6 8 5 good
// 8 5 6 
// 8 6 5 

/*
t_list_a *ft_algo_3(t_list_a *la)
{
	t_list_a *tmp;

	tmp = la;
	if (tmp->data < tmp->next->data && tmp->next->data > tmp->next->next->data)//8 5 6
	{
		sa(tmp);
		return (tmp);
	}
	else if (tmp->data > tmp->next->data && tmp->next->data < tmp->next->next->data)
	{
		sa(tmp);
		return (tmp);
	}
	return (tmp);
}*/

/*
t_list_a *ft_algo_3(t_list_a *la)
{
	t_list_a *tmpa;

	tmpa = la->next;
	if (tmpa->data > tmpa->next->data && tmpa->data > tmpa->next->next->data)
	{
		ra(la);
		tmpa = sa(la);
		return (tmpa);
	}
	if (tmpa->data > tmpa->next->data && tmpa->data < tmpa->next->next->data)
	{
		ra(la);
		tmpa = sa(la);
		return (tmpa);
	}
	else if (tmpa->data > tmpa->next->data && tmpa->data < tmpa->next->next->data)
	{
		tmpa = sa(la);
		return (tmpa);
	}
	else if (tmpa->data < tmpa->next->data && tmpa->next->data > tmpa->next->next->data)
	{
		rra(la);
		return (tmpa);
	}
	else if (tmpa->data > tmpa->next->data && tmpa->data > tmpa->next->next->data)
	{
		tmpa = ra(la);
		sa(la);
		return (tmpa);
	}
	return (la);
}
*/