/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_manager.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:17:46 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/05 17:26:43 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_manager(t_struct *data, int len)
{
	if (len == 3)
		ft_algo_3(data);
	if (len == 4)
		ft_algo_4(data);
}
