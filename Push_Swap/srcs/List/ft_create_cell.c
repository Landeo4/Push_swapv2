/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_cell.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:23:00 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/30 19:12:41 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_a	*ft_createCell_a(t_struct *data, int nb)
{
	t_list_a *cell;
	cell = malloc(sizeof(t_list_a));
	if (!cell)
		return NULL;
	cell->num = nb;
	cell->next = NULL;
	data->la = cell;
	return (cell);
}

t_list_b	*ft_createCell_b(t_struct *data, int nb)
{
	t_list_b *cell;
	cell = malloc(sizeof(t_list_b));
	if (!cell)
		return NULL;
	cell->num = nb;
	cell->next = NULL;
	data->lb = cell;
	return (cell);
}

