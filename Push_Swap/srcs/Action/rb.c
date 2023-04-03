/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:47:30 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/03 16:18:23 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
**	This function takes as parameter: 
**
**	t_list_b the name of the struct
**
**	la : name of the list b
** =====================================================
** =====================================================
**
** take the first element on the top of b and put it in top a
** prend le premier element en haut de b et le met en haut de a
**
** Décale d’une position vers le haut tous les élements de la pile a.
** Le premier élément devient le dernier.
*/

void rb(t_struct *data)
{
	int i;
	int recup;
	t_list_b *tmp;

	i = 0;
	tmp = data->lb;
	recup = data->lb->num;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	i++;
	tmp = data->lb;
	ft_freeAtb(data, 1);
	ft_addAta(data, recup, i);
	data->lb = tmp;
}
