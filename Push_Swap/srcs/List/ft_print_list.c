/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:47:05 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/30 17:52:28 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_print_lista(t_struct *data)
{
	t_list_a *tmp;

	tmp = data->la->next;
	if (!tmp)
		return (-1);
	while (tmp)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
	return (1);
}

int ft_print_listb(t_struct *data)
{
	t_list_b *tmp;

	tmp = data->lb->next;
	if (!tmp)
		return (-1);
	while (tmp)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
	return (1);
}