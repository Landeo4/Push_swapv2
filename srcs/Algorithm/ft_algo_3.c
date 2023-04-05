/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:22:38 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/05 17:22:48 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_algo_3(t_struct *data)
{
	int num1;
	int num2;
	int num3;

	num1 = data->la->next->num;
	num2 = data->la->next->next->num;
	num3 = data->la->next->next->next->num;
	if (num1 > num2 && num2 < num3 && num1 > num3) //6 5 8 +
		ra(data);
	else if (num1 < num2 && num2 > num3 && num1 < num3) // 6 8 5 +
	{	
		rra(data);
		sa(data->la);
	}
	else if (num1 > num2 && num2 < num1 && num1 > num3) // 5 6 8 +
	{
		sa(data->la);
		rra(data);
	}
	else if (num1 > num2 && num2 > num3 && num1 > num3) // 8 6 5 +
	{
		rra(data);
		sa(data->la);
	}
	else if (num1 < num2 && num2 > num3 && num3 < num1) // 5 8 6 ++
		rra(data);
}
