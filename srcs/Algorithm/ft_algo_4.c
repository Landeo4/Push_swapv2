/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:23:21 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/06 20:01:20 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2 
*/

void ft_algo_4(t_struct *data)
{
	int token;
	t_list_a *n1;

	n1 = data->la->next;
	if (n1->num < n1->next->num && n1->num < n1->next->next->num && n1->num < n1->next->next->next->num)
		token = 1;
	else if (n1->num > n1->next->num && n1->num < n1->next->next->num && n1->num < n1->next->next->next->num)
		token = 2;
	else if (n1->num > n1->next->num && n1->num > n1->next->next->num && n1->num < n1->next->next->next->num)
		token = 3;
	else if (n1->num > n1->next->num && n1->num > n1->next->next->num && n1->num > n1->next->next->next->num)
		token = 4;
	if (token == 1)
		ft_algo_4_1(data);
	/*else if (token == 2)
		ft_algo_4_2(data);
	else if (token == 3)
		ft_algo_4_3(data);
	else if (token == 4)
		ft_algo_4_4(data);*/
}

/*
1 2 3 4
1 2 4 3 good
1 3 2 4 good
1 3 4 2 good
1 4 2 3 good
1 4 3 2 good
*/

void ft_algo_4_1(t_struct *data)
{
	t_list_a *num;
// on sais deja qu'on est chez les 1
	num = data->la->next;
	// 1 2 4 3
	if (num->next->num < num->next->next->num && num->next->next->num > num->next->next->next->num && num->next->num < num->next->next->next->num) // 1 2 4 3
	{
		pb(data);
		rra(data);
		sa(data->la);
		pa(data);
	}
	else if (num->next->num > num->next->next->num && num->next->next->num < num->next->next->next->num && num->next->num < num->next->next->next->num) // 1 3 2 4 ou 4 2 3 1
	{
		pb(data);
		sa(data->la);
		pa(data);
	}
	else if (num->next->num < num->next->next->num && num->next->next->num > num->next->next->next->num && num->next->num > num->next->next->next->num) // 1 3 4 2 ou  2 4 3 1
	{
		pb(data);
		rra(data);
		pa(data);
	}
	else if (num->next->num > num->next->next->num && num->next->next->num < num->next->next->next->num && num->next->num > num->next->next->next->num) // 1 4 2 3 ou  3 2 4 1
	{
		pb(data);
		ra(data);
		pa(data);
	}
	else if (num->next->num > num->next->next->num && num->next->next->num > num->next->next->next->num && num->next->num > num->next->next->next->num) // 1 4 3 2  ou  2 3 4 1
	{
		pb(data);
		sa(data->la);
		rra(data);
		pa(data);
	}
}

/*
int ft_check_base_alg_4(t_struct *data)
{
	t_struct *n1;
	t_struct *n2;
	t_struct *n3;
	t_struct *n4;

	n1 = data->la->num;
	n2 = data->la->next->num;
	n3 = data->la->next->next->num;
	n4 = data->la->next->next->next->num;
	if (n1 < n2 && n1 < n3 && n1 < n4)
		return (1);
	else if (n1 > n2 && n1 < n3 && n1 < n4)
		return (2);
	else if (n1 > n2 && n1 > n3 && n1 < n4)
		return (3);
	else if (n1 > n2 && n1 > n3 && n1 > n4)
		return (4);
}
*/