/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing_manager.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:31:04 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/24 10:14:44 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_parsing_manager(int argc, char **argv)
{
	int i;
	char *buf;

	i = 1;
	//write(2, RED, ft_strlen(RED));
	while (argv[i])
	{
		buf = argv[i];
		if (ft_guillemet(argv) == 0)
			return (ft_printf("les Guillement sont pas bon"));
		if ((ft_verif_existing(argc)) == 0)
		{
			write(2, "put at leat 3 argument\n", 24);
			return (2);
		}
		if ((ft_verif_input(argv)) == 0)
		{
			write(2, "wrong input, put numbers please\n", 20);
			return (0);
		}
		if ((ft_verif_int(buf)) == 0)
		{
			write(2, "wrong number please put an int\n", 15);
			return (0);
		}
		if ((ft_verif_duplicate(argv)) == 0)
		{
			write(2, "2 same numbers, don't put duplicate numbers\n", 43);
			return (0);
		}
		i++;
	}
	if (ft_check_var(argv) == 0)
		return (0);
	//write(2, RESET, ft_strlen(RESET));
	return (1);
}
