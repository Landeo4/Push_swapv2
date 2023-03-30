/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:25:28 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/30 17:46:07 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void *ft_first_la(t_struct *data)
{
	data->la = malloc(sizeof(t_list_a));
	/*
	if (!la)
		return (NULL);*/
	data->la->next = NULL;
	return (data->la);
}

void *ft_first_lb(t_struct *data)
{
	data->lb = malloc(sizeof(t_list_b));
	/*
	if (!la)
		return (NULL);*/
	data->lb->next = NULL;
	return (data->lb);
}
