/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getAta.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:03:12 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/30 18:05:21 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_getAta(t_struct *data, int pos)
{
	int i;

	i = 0;
	if (data->la == NULL)
	{
		printf("liste vide\n");
		return (-1);
	}
	while (i < pos)
	{
		i++;
		data->la = data->la->next;
	}
	return (data->la->num);
}

int ft_getAtb(t_struct *data, int pos)
{
	int i;

	i = 0;
	if (data->lb == NULL)
	{
		printf("liste vide\n");
		return (-1);
	}
	while (i < pos)
	{
		i++;
		data->lb = data->lb->next;
	}
	return (data->lb->num);
}
