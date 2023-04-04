/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:54:38 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/04 12:23:04 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**
**	la : name of the list b
** =====================================================
** =====================================================
**
** every element of a will go down
** the first become the last
*/

void	rrb(t_struct *data)
{
	t_list_b *tmp;
	int i;
	int recup;

	tmp = data->lb->next;
	i = 1;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	recup = tmp->num;
	tmp = data->lb;
	ft_freeAtb(data, i);
	ft_addAtb(data, recup, 1);
}
