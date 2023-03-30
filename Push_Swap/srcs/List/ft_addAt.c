/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addAt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:20:00 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/30 18:26:58 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_addAt_a(t_struct *data, int nb, int pos)
{
	t_list_a	*prec;
	t_list_a	*cur;
	int 		i;
	t_list_a	*cell;

	cell = ft_createCell_a(data, nb);
	prec = data->la;
	cur = data->la;
	if (data->la == NULL)
		data->la = cell;
	if (pos == 0)
	{
		cell->next = data->la;
		data->la = cell;
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;
}

void	ft_addAt_b(t_struct *data, int nb, int pos)
{
	t_list_b	*prec;
	t_list_b	*cur;
	int 		i;
	t_list_b	*cell;

	cell = ft_createCell_b(data, nb);
	prec = data->lb;
	cur = data->lb;
	if (data->lb == NULL)
		data->lb = cell;
	if (pos == 0)
	{
		cell->next = data->lb;
		data->lb = cell;
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cell;
	cell->next = cur;
}
