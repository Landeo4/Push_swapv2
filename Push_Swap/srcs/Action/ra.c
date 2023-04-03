/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:12:31 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/03 16:17:34 by landeo           ###   ########.fr       */
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
** take the first element on the top of b and put it in top a
** prend le premier element en haut de b et le met en haut de a
**
** Décale d’une position vers le haut tous les élements de la pile a.
** Le premier élément devient le dernier.
*/

void ra(t_struct *data)
{
	int i;
	int recup;
	t_list_a *tmp;

	i = 0;
	tmp = data->la;
	recup = data->la->num;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	i++;
	tmp = data->la;
	ft_freeAta(data, 1);
	ft_addAtb(data, recup, i);
	data->la = tmp;
}
