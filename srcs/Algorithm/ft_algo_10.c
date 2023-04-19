/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:16:43 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/19 19:51:32 by tpotilli         ###   ########.fr       */
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
	i = 0;
	while (i < pos)
	{
		i++;
		if (la->num == nb)
			break;
		la = la->next;
	}
	la = data->la->next;
	//printf("i = %d et len = %d", i, ft_len_lista(data));
	//printf("la = %d", la->num);
	ft_10_action(i, nb, la, data);
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

void ft_10_action(int pos, int num, t_list_a *tmp, t_struct *data)
{
	int len;

	len = ft_len_lista(data);
	//printf("yo la = %d", la->num);
	if (pos > (len / 2))
	{
		while (tmp->num != num)
		{
			rra(data);
			data->la = tmp;
			printf("%d", tmp->num);
		}
		pb(data);
	}
	else if (pos < len / 2)
	{
		while (tmp->num != num)
		{
			ra(data);
			//la = la->next;
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
