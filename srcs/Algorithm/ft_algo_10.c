/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:16:43 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/18 13:06:53 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_algo_10(t_struct *data)
{
	//t_struct *tab;
	t_list_a *la;
	int nb;
	int i;

	//tab = data;
	la = data->la->next;
	nb = ft_found_little(data);
	while (la)
	{
		if (la->num == nb)
			break;
		la = la->next;
		i++;
	}
	ft_10_action(i, nb, la, data);
}

void ft_10_action(int i, int nb, t_list_a *la, t_struct *data)
{
	t_list_a *ka;

	ka = data->la->next;
	while (i > ft_len_lista(data) / 2)
	{
		if (ka->num == la->num)
		{
			pb(data);
			break;
		}
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
