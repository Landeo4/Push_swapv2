/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:40:33 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/18 12:05:16 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_algo_5_1(t_struct *data)
{
	pb(data);
	ft_algo_4(data, 1);
	pa(data);
}

void ft_algo_5_2(t_struct *data)
{
	pb(data);
	ft_algo_4_2(data);
	pa(data);
	sa(data->la);
}

void ft_algo_5_3(t_struct *data)
{
	pb(data);
	ft_algo_4_3(data);
	pb(data);
	pb(data);
	printf("yo");
	rrb(data);
	pa(data);
	pa(data);
	pa(data);
}

void ft_algo_5_4(t_struct *data)
{
	(void)data;
}

void ft_algo_5_5(t_struct *data)
{
	(void)data;
}
