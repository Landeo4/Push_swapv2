/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:53:32 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/03 23:29:45 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_lista(t_struct *data)
{
	t_list_a *tmp;

	tmp = data->la;
	while (data->la)
	{
		tmp = data->la->next;
		free(data->la);
		data->la = tmp;
	}
}

void	ft_free_listb(t_struct *data)
{
	t_list_b *tmp;

	tmp = NULL;
	while (data->lb)
	{
		tmp = data->lb->next;
		free(data->lb);
		data->lb = tmp;
	}
}
