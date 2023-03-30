/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lista.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:53:32 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/30 17:56:10 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_lista(t_struct *data)
{
	t_list_a *tmp;

	tmp = NULL;
	while (data->la)
	{
		tmp = data->la->next;
		free(data->la);
		data->la = tmp;
	}
}

void	ft_free_listb(t_struct *data)
{
	t_list_a *tmp;

	tmp = NULL;
	while (data->lb)
	{
		tmp = data->lb->next;
		free(data->lb);
		data->lb = tmp;
	}
}
