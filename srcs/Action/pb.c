/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 19:07:26 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/05 13:08:32 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	t_list_a the name of the struct
**
**	la : name of the list a
** =====================================================
** =====================================================
**
** take the first element on the top of a and put it in top b
** prend le premier element au sommet de a et le met sur b.
*/

void pb(t_struct *data)
{
	int tmp;

	tmp = data->la->next->num;
	ft_freeAtb(data, 1);
	ft_addAta(data, tmp, 1);
}