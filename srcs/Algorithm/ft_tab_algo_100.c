/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_algo_100.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:59:10 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/27 18:46:05 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
ce que je pense faire c'est cree un tableau qui sera exactement comme ma liste
Ensuite je fais le radix dans mon tableau
into je cree une variable de position qui va prendre la position du plus petit nombre de mon tableau 
(je recup aussi le nb pour etre sur)
et je tri sur ma vrai liste en comparant les deux
je pense que comme ca fera un nombre d'action "ok"
tout en mettant en place un systheme un peux plus opti sur mes actions a base de si la len/2 et len/3
*/
int		*ft_100_tab_manager(t_struct *data)
{
	int			*tab;
	t_list_a	*la;

	la = data->la->next;
	tab = ft_100_tab(la, data);
	tab = ft_get_first_unit(tab, la, data);
	return (tab);
}

//la m'a liste est dans le tableau

int		*ft_100_tab(t_list_a *la, t_struct *data)
{
	int		*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(int) * ft_len_lista(data));
	if (tab == NULL)
		return (0);
	ft_printf("\n----debut des valeurs du tableau----");
	while (la)
	{
		tab[i] = la->num;
		ft_printf("\n%i", tab[i]);
		i++;
		la = la->next;
	}
	ft_printf("\n----fin des valeurs du tableau----");
	return (tab);
}

int		*ft_get_first_unit(int *tab, t_list_a *la, t_struct *data)
{
	int		i;
	int		*tmp;
	int		len;

	len = ft_len_lista(data);
	tmp = ft_100_tab(la, data);
	i = 0;
	while (len != 0)
	{
		//ft_printf("\navant le modulo = %d", tmp[i]);
		if (tab[i] >= 10)
			tmp[i] %= 10;
		//ft_printf(" ->  %d", tmp[i]);
		i++;
		len--;
	}
	i = 0;
	tmp = ft_tri_100(tmp, data);
	len = ft_len_lista(data);
	while (i < len)
	{
		ft_printf("\nle tableau au complet = (%d)%d",tab[i], tmp[i]);
		i++;
	}
	return (tmp);
}

int		*ft_tri_100(int	*tmp, t_struct *data)
{
	int	i;
	int	a;
	int	b;
	int	j;
	int	size;

	size = ft_len_lista(data);
	j = 1;
	i = 0;
	while (ft_tab_checker(tmp, data) == 0)
	{
		while (i < size)
		{
			a = tmp[i];
			b = tmp[j];
			if (tmp[i] > tmp[j])
			{
				tmp[i] = b;
				tmp[j] = a;
				ft_printf("yyyy");
			}
			i++;
			j++;
		}
		size = ft_len_lista(data);
		i = 0;
		j = i + 1;
	}
	return (tmp);
}


bool	ft_tab_checker(int *tmp, t_struct *data)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 1;
	len = ft_len_lista(data);
	while (j < len)
	{
		if (tmp[i] > tmp[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

/*
int		*ft_get_first_unit(int *tab, t_list_a *la, t_struct *data)
{
	int		i;
	int		*tmp;
	int		len;

	len = ft_len_lista(data);
	tmp = ft_100_tab(la, data);
	i = 0;
	while (len != 0)
	{
		//ft_printf("\navant le modulo = %d", tmp[i]);
		if (tab[i] >= 10)
			tmp[i] %= 10;
		//ft_printf(" ->  %d", tmp[i]);
		i++;
		len--;
	}
	i = 0;
	len = ft_len_lista(data);
	while (ft_tab_checker(tmp, data) != 1)
	{
		while (tmp[i])
		{
			tmp = ft_swap(tmp, i, (i + 1));
			i++;
			ft_printf("\napres le swap %d", tmp[i]);
			i++;
		}
		i = 0;
	}
	i = 0;
	while (len)
	{
		ft_printf("\nle tableau au complet = %d", tmp[i]);
		len--;
		i++;
	}
	return (tab);
}

bool	ft_tab_checker(int *tmp, t_struct *data)
{
	int	i;
	int	len;

	len = ft_len_lista(data);
	i = 0;
	while (tmp[i] < tmp[i + 1])
		i++;
	if (i == len)
		return (1);
	return (0);
}
*/