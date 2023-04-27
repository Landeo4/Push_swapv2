/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_algo_100.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:59:10 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/27 16:27:36 by tpotilli         ###   ########.fr       */
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
	ft_get_first_unit(tab, la, data);
	return (tab);
}

//la m'a liste est dans le tableau

int		*ft_100_tab(t_list_a *la, t_struct *data)
{
	int		*tab;
	int		i;

	i = 1;
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
	
}