/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: landeo <landeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:47:19 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/04 15:32:53 by landeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

// =======================================================================
//								Includes
// =======================================================================

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

// =======================================================================
//								Colors
// =======================================================================

# define BLACK "\001\033[1;30m\002"
# define RED "\001\033[1;31m\002"
# define GREEN "\001\033[1;32m\002"
# define YELLOW "\001\033[1;33m\002"
# define BLUE "\001\033[1;34m\002"
# define PURPLE "\001\033[1;35m\002"
# define CYAN "\001\033[1;36m\002"
# define WHITE "\001\033[1;37m\002"
# define RESET "\001\033[0m\002"

// =======================================================================
//								list
// =======================================================================

typedef struct s_list_a
{
	int num;
	struct s_list_a *next;
}	t_list_a;

typedef struct s_list_b
{
	int num;
	struct s_list_b *next;
}	t_list_b;

typedef struct s_struct
{
	struct s_list_a *la;
	struct s_list_b *lb;
}					t_struct;

// =======================================================================
//								Function List_A
// =======================================================================

t_list_a	*ft_createCell_a(int nb);
t_list_a	*ft_first_la(t_struct *data);
void		ft_addAta(t_struct *data, int nb, int pos);
int 		ft_print_lista(t_struct *data);
void		ft_free_lista(t_struct *data);
int 		ft_len_lista(t_struct *data);
int 		ft_getAta(t_struct *data, int pos);
t_list_a	*ft_freeAta(t_struct *data, int pos);
t_struct 	*ft_init_struct(t_struct *data);

// =======================================================================
//								Function List_B
// =======================================================================

t_list_b	*ft_createCell_b(int nb);
t_list_b	*ft_first_lb(t_struct *data);
void		ft_addAtb(t_struct *data, int nb, int pos);
int 		ft_print_listb(t_struct *data);
void		ft_free_listb(t_struct *data);
int 		ft_len_listb(t_struct *data);
int 		ft_getAtb(t_struct *data, int pos);
void 		ft_free_both(t_list_a *la, t_list_b *lb);
//void		ft_freeAtb(t_struct *data, int pos);
t_list_b	*ft_freeAtb(t_struct *data, int pos);

// =======================================================================
//								Libft
// =======================================================================

int		ft_isdigit(int c);
int		ft_strlen(char *s);
int		ft_atoi(char *nptr);
long	ft_atol(char *nptr);
void	ft_putstr_fd(char *s, int fd);

// =======================================================================
//								Parsing 
// =======================================================================

bool ft_verif_input(char **argv);
bool ft_verif_existing(int argc);
bool ft_verif_duplicate(char **argv);
bool ft_verif_int(char *argv);
int ft_parsing_manager(int argc, char **argv);
bool ft_check_var(char **argv);

// =======================================================================
//								actions
// =======================================================================

t_list_a *sa(t_list_a *la);
t_list_b *sb(t_list_b *lb);
void ss(t_list_a *la, t_list_b *lb);
void pa(t_struct *data);
void pb(t_struct *data);
t_list_a *ft_change_pos_a(t_list_a *la);
void ra(t_struct *data);
void rb(t_struct *data);
void	rra(t_struct *data);
void	rrb(t_struct *data);

// =======================================================================
//								algo
// =======================================================================

void	ft_algo_manager(t_struct *data, int len);
void	ft_algo_3(t_struct *data);



void push_swap(t_list_a *);
void ft_error();

#endif