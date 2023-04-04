/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_manager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:17:46 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/04 17:26:42 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_manager(t_struct *data, int len)
{
	if (len == 3)
		ft_algo_3(data);
}

// 5 6 8 good car de base
// 5 8 6 
// 6 5 8 good
// 6 8 5 
// 8 5 6 
// 8 6 5 

void	ft_algo_3(t_struct *data)
{
	t_list_a *tma;

	tma = data->la->next;
	if (tma->num > tma->next->num && tma->next->num < tma->next->next->num)
		ra(data);
	else if (tma->num < tma->next->num && tma->next->num > tma->next->next->num)
		pa(data);
}

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