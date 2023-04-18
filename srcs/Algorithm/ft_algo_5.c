/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 10:40:33 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/18 11:46:56 by tpotilli         ###   ########.fr       */
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
	printf("hey\n");
	pb(data);
	ft_algo_4(data, 2);
	ft_print_lista(data);
	pa(data);
	//sa(data->la);
}

void ft_algo_5_3(t_struct *data)
{
	(void)data;
}

void ft_algo_5_4(t_struct *data)
{
	(void)data;
}

void ft_algo_5_5(t_struct *data)
{
	(void)data;
}
