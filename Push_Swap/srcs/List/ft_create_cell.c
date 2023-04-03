/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_cell.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:23:00 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/03 23:42:25 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list_a	*ft_createCell_a(int nb)
{
	t_list_a *cell;
	cell = malloc(sizeof(t_list_a));
	if (!cell)
		return NULL;
	cell->num = nb;
	cell->next = NULL;
	return (cell);
}

t_list_b	*ft_createCell_b(int nb)
{
	t_list_b *cell;
	cell = malloc(sizeof(t_list_b));
	if (!cell)
		return NULL;
	cell->num = nb;
	cell->next = NULL;
	return (cell);
}
