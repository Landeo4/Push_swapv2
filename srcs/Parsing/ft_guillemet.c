/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guillemet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:45:40 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/24 12:16:36 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// faire une fonction pour les guillemet
// 

char	**ft_guillemet(char **argv)
{
	int i;
	int j;
	char **str;

	str = NULL;
	i = 0;
	j = 0;
	while (argv[i])
	{
		if (argv[i][j] == 22)
		{
			while (argv[i][j] != 22)
			{
				if (ft_verif_int(argv[i]) == 1)
					str[i][j] = argv[i][j];
				j++;
			}
		}
		i++;
	}
	return (str);
}

int	ft_guillemet_check(char **argv, int i)
{
	int	j;
	int	tmp;

	j = 0;
	tmp = 0;
	while (argv[i])
	{
		while (argv[i][j] == 22)
		{
			tmp++;
			j++;
		}
		i++;
	}
	return (1);
}

/*
char	**ft_str_guillemet(char **argv)
{
	int i;
	char **save;
	int tmp;

	i = 0;
	save = NULL;
	tmp = 0;
	ft_write_str(i, save, tmp, argv);
	return (save);
}

char	**ft_write_str(int i, char **save, int tmp, char **argv)
{
	int j;

	j = 0;
	while (argv[i])
	{
		tmp = ft_guillemet(argv);
		while (tmp > 0)
		{
			if (argv[i][j++] == ' ')
				save[i][j] = argv[i][j];
			else if (argv[i][j] == '\t')
				return (0);
			tmp--;
			j++;
		}
		i++;
	}
	return (save);
}

int	ft_guillemet(char **argv)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	i = 0;
	tmp = 0;
	while (argv[i])
	{
		while (argv[i][j] == 22)
		{
			tmp++;
			j++;
		}
		i++;
	}
	return (tmp);
}
*/