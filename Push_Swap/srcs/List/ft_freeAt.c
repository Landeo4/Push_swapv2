/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeAta.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 18:09:21 by tpotilli          #+#    #+#             */
/*   Updated: 2023/03/30 18:22:47 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freeAta(t_struct *data, int pos)
{
	int i;
	t_list_a *prec;
	t_list_a *cur;
	t_list_a *tete;

	prec =data->la;
	cur = data->la;
	tete = data->la;
	if (data->la == NULL)
		return (NULL);
	if (pos == 0)
	{
		tete = tete->next;
		free(cur);
		return (tete);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cur->next;
	free(cur);
	return (tete);
}

void	ft_freeAtb(t_struct *data, int pos)
{
	int i;
	t_list_b *prec;
	t_list_b *cur;
	t_list_b *tete;

	prec =data->lb;
	cur = data->lb;
	tete = data->lb;
	if (data->lb == NULL)
		return (NULL);
	if (pos == 0)
	{
		tete = tete->next;
		free(cur);
		return (tete);
	}
	i = 0;
	while (i < pos)
	{
		i++;
		prec = cur;
		cur = cur->next;
	}
	prec->next = cur->next;
	free(cur);
	return (tete);
}
