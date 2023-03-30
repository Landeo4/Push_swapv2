/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:47:30 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/29 14:13:33 by tpotilli         ###   ########.fr       */
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

t_list_b *rb(t_list_b *lb)
{
	t_list_b *tmp;
	int i;
	int recup;

	tmp = lb->next;
	i = 0;
	recup = tmp->data;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	i++;
	tmp = lb;
	tmp = ft_freeAtb(tmp, 1);
	tmp = ft_addAtb(tmp, recup, i);
	return (tmp);
}
