/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_lista.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:58:16 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/30 18:00:06 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_len_lista(t_struct *data)
{
	int len;

	len = 1;
	while (data->la)
	{
		len++;
		data->la = data->la->next;
	}
	return (len);
}

int ft_len_listb(t_struct *data)
{
	int len;

	len = 1;
	while (data->lb)
	{
		len++;
		data->lb = data->lb->next;
	}
	return (len);
}