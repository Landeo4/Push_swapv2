/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:16:43 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/18 14:11:11 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_algo_10(t_struct *data)
{
	t_list_a *la;
	int nb;
	int i;

	la = data->la->next;
	nb = ft_found_little(data);
	while (la)
	{
		if (la->num == nb)
			break;
		la = la->next;
		i++;
	}
	la = data->la->next;
	printf("i = %d et len = %d", i, ft_len_lista(data));
	//ft_10_action(i, nb, la, data);
}

void ft_10_action(int i, int num, t_list_a *la, t_struct *data)
{
	int len;

	len = ft_len_lista(data) / 2;
	if (i > len)
	{
		while (la->num != num)
		{
			rra(data);
		}
		pb(data);
	}
	else if (i < len / 2)
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
