/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:32:15 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/03 23:47:00 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_struct *ft_init_struct(t_struct *data)
{
	data->la = ft_first_la(data);
	data->lb = ft_first_lb(data);
	return (data);
}
