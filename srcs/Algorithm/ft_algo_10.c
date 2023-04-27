/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_10.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:16:43 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/27 14:49:44 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
**	This function takes as parameter: 
**
**	data
**	len
**
** =====================================================
** =====================================================
**
** ft_algo_10 will sort all input under 10 except 3
*/


void	ft_algo_10(t_struct *data)
{
	t_list_a	*la;
	int			num;
	int			i;
	int			pos;

	i = 0;
	pos = ft_found_pos_little(data);
	num = ft_found_little(data);
	while (i < pos)
	{
		i++;
		if (la->num == num)
			break ;
		la = la->next;
	}
	la = data->la->next;
	ft_tri_10(la, data);
}

void	ft_tri_10(t_list_a *la, t_struct *data)
{
	while (la)
	{
		if (ft_len_lista(data) == 3)
		{
			ft_algo_3(data);
			break ;
		}
		ft_10_action(la, data);
		la = data->la->next;
	}
	while (ft_len_listb(data))
		pa(data);
}
// probleme de position si le premier chiffre est le plus petit
void	ft_10_action(t_list_a *tmp, t_struct *data)
{
	int	len;
	int pos;
	int num;

	pos = ft_found_pos_little(data);
	num = ft_found_little(data);
	len = ft_len_lista(data);
	len = len / 2;
	if (pos < len)
	{
		ft_printf("hellp");
		while (tmp)
		{
			if (tmp->num == num)
				break ;
			ra(data);
			tmp = data->la->next;
		}
		pb(data);
	}
	else if (pos > (len / 2))
	{
		ft_printf("hellph");
		while (tmp)
		{
			if (tmp->num == num)
				break ;
			rra(data);
			tmp = data->la->next;
		}
		pb(data);
	}
}

// it's use to find the position of little nb
// le probleme est que tous les nb apres le plus petit
// se font stocker dans pb donc je dois
// surement corriger la fonction de recup

int	ft_found_pos_little(t_struct *data)
{
	int			i;
	t_list_a	*tab;
	int			nb;

	i = 1;
	tab = data->la->next;
	nb = ft_found_little(data);
	while (tab)
	{
		if (nb != tab->num)
			tab = tab->next;
		else
			break ;
		i++;
	}
	return (i);
}
/*
int	ft_found_pos_little(t_struct *data)
{
	int			i;
	t_list_a	*tab;

	i = 0;
	tab = data->la->next;
	while (tab)
	{
		i++;
		tab = tab->next;
	}
	return (i);
}
*/
// it's use to find the little nb

int	ft_found_little(t_struct *data)
{
	int			i;
	int			nb;
	t_list_a	*tab;

	i = 1;
	tab = data->la->next;
	nb = data->la->next->num;
	while (tab)
	{
		if (nb > tab->num)
			nb = tab->num;
		tab = tab->next;
		ft_printf("\nappel n%d tab = %d", i, nb);
		i++;
		if (i > 10)
			break ;
	}
	return (nb);
}

/*
void	ft_algo_10(t_struct *data)
{
	t_list_a	*la;
	int			nb;
	int			i;
	int			pos;

	pos = ft_found_pos_little(data);
	la = data->la->next;
	nb = ft_found_little(data);
	i = 0;
	while (i < pos)
	{
		i++;
		if (la->num == nb)
			break ;
		la = la->next;
	}
	la = data->la->next;
	ft_tri_10(pos, nb, la, data);
}

void	ft_tri_10(int i, int nb, t_list_a *la, t_struct *data)
{
	while (la)
	{
		if (ft_len_lista(data) == 3)
		{
			ft_algo_3(data);
			break ;
		}
		ft_10_action(i, nb, la, data);
		nb = ft_found_little(data);
	}
	while (ft_len_listb(data))
		pa(data);
}

void	ft_10_action(int pos, int num, t_list_a *tmp, t_struct *data)
{
	int	len;

	len = ft_len_lista(data);
	if (pos > (len / 2))
	{
		while (tmp)
		{
			if (tmp->num == num)
				break ;
			rra(data);
			tmp = data->la->next;
		}
		ft_print_listb(data);
		ft_printf("= b \n");
		pb(data);
	}
	else if (pos < (len / 2))
	{
		while (tmp)
		{
			if (tmp->num == num)
				break ;
			ra(data);
			tmp = data->la->next;
		}
		pb(data);
	}
}

// it's use to find the position of little nb
// le probleme est que tous les nb apres le plus petit
// se font stocker dans pb donc je dois
// surement corriger la fonction de recup

int	ft_found_pos_little(t_struct *data)
{
	int			i;
	t_list_a	*tab;

	i = 0;
	tab = data->la->next;
	while (tab)
	{
		i++;
		tab = tab->next;
	}
	return (i);
}

// it's use to find the little nb

int	ft_found_little(t_struct *data)
{
	int			i;
	int			nb;
	t_list_a	*tab;

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
	return (nb);
}
*/