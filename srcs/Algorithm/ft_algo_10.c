/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:16:43 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/18 17:08:34 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_algo_10(t_struct *data)
{
	t_list_a *la;
	int nb;
	int i;
	int pos;

	pos = ft_found_pos_little(data);
	la = data->la->next;
	nb = ft_found_little(data);
	while (i < pos)
	{
		i++;
		if (la->num == nb)
			break;
		la = la->next;
	}
	la = data->la->next;
	printf("i = %d et len = %d", i, ft_len_lista(data));
	//ft_10_action(i, nb, la, data);
}

int ft_found_pos_little(t_struct *data)
{
	int i;
	t_list_a *tab;

	i = 0;
	tab = data->la->next;
	while (tab)
	{
		i++;
		tab = tab->next;
	}
	return (i);
}

void ft_10_action(int pos, int num, t_list_a *la, t_struct *data)
{
	int len;

	len = ft_len_lista(data) / 2;
	if (pos > len)
	{
		while (la->num != num)
		{
			rra(data);
		}
		pb(data);
	}
	else if (pos < len / 2)
	{
		while (la->num != num)
		{
			ra(data);
			la = la->next;
		}
		pb(data);
	}
}
//faire une fonction qui trouve le plus petit chiffre
//puis renvoie son emplacement
int ft_found_little(t_struct *data)
{
	int i;
	int nb;
	t_list_a *tab;

	i = 0;
	tab = data->la->next;
	nb = data->la->next->num;
	while (tab)
	{
		if (nb > tab->num)
			nb = tab->num;
		i++;
		tab = tab->next;
	}
	printf("le plus petit est %d\n", nb);
	return (nb);
}
