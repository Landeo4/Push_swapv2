/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:47:19 by tpotilli          #+#    #+#             */
/*   Updated: 2023/04/27 14:24:25 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// =======================================================================
//								Includes
// =======================================================================

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
# include <stdint.h>
# include <stdarg.h>

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
	int					num;
	struct s_list_a		*next;
}	t_list_a;

typedef struct s_list_b
{
	int					num;
	struct s_list_b		*next;
}	t_list_b;

typedef struct s_struct
{
	struct s_list_a	*la;
	struct s_list_b	*lb;
}					t_struct;

// =======================================================================
//								Function List_A
// =======================================================================

t_list_a	*ft_createcell_a(int nb);
t_list_a	*ft_first_la(t_struct *data);
void		ft_addata(t_struct *data, int nb, int pos);
int			ft_print_lista(t_struct *data);
void		ft_free_lista(t_struct *data);
int			ft_len_lista(t_struct *data);
int			ft_getata(t_struct *data, int pos);
t_list_a	*ft_freeata(t_struct *data, int pos);
t_struct	*ft_init_struct(t_struct *data);

// =======================================================================
//								Function List_B
// =======================================================================

t_list_b	*ft_createcell_b(int nb);
t_list_b	*ft_first_lb(t_struct *data);
void		ft_addatb(t_struct *data, int nb, int pos);
int			ft_print_listb(t_struct *data);
void		ft_free_listb(t_struct *data);
int			ft_len_listb(t_struct *data);
int			ft_getatb(t_struct *data, int pos);
void		ft_free_both(t_list_a *la, t_list_b *lb);
//void		ft_freeAtb(t_struct *data, int pos);
t_list_b	*ft_freeatb(t_struct *data, int pos);

// =======================================================================
//								Libft
// =======================================================================

int			ft_isdigit(int c);
int			ft_strlen(char *s);
int			ft_atoi(char *nptr);
long		ft_atol(char *nptr);
void		ft_putstr_fd(char *s, int fd);
int			ft_putchar(char c);
void		ft_putnbr_base(unsigned int nbr, const char format);
int			ft_putstr(char *s);
int			ft_putnbr(int nbr);
int			ft_printf(const char *str, ...);
int			ft_strlen(char *str);
int			ft_count_base(unsigned int nbr);
int			ft_count(int nbr);
int			ft_putnbr_unsigned(unsigned int nbr);
int			ft_unsigned_count(unsigned int nbr);
int			ft_count_help(unsigned long long nbr, int cpt);
int			ft_ptr_len(uintptr_t num);
void		ft_put_ptr(uintptr_t num);
int			ft_print_ptr(unsigned long long ptr);
char		*ft_itoa(int n);
int			ft_print_hex(unsigned int nbr, const char format);
char		**ft_strlcpy(char **src);

// =======================================================================
//								Parsing 
// =======================================================================

bool		ft_verif_input(char **argv);
bool		ft_verif_existing(int argc);
bool		ft_verif_duplicate(char **argv);
bool		ft_verif_int(char *argv);
int			ft_parsing_manager(int argc, char **argv);
bool		ft_check_var(char **argv);
char		*ft_guillemet(char **argv, int i);
char		**ft_str_guillemet(char **argv);
char		**ft_write_str(int i, char **save, int tmp, char **argv);
char		**ft_cpy_gui(char **argv);
int			ft_guillemet_size(char **argv, int i);
int			ft_gui_check(char **argv);
int			ft_parsing_manager_sup(char **argv);

// =======================================================================
//								actions
// =======================================================================

t_list_a	*sa(t_list_a *la);
t_list_b	*sb(t_list_b *lb);
void		ss(t_struct *data);
void		pa(t_struct *data);
void		pb(t_struct *data);
t_list_a	*ft_change_pos_a(t_list_a *la);
void		ra(t_struct *data);
void		rb(t_struct *data);
void		rra(t_struct *data);
void		rrb(t_struct *data);

// =======================================================================
//								algo
// =======================================================================

void		ft_algo_manager(t_struct *data, int len);
void		ft_algo_3(t_struct *data);
void		ft_algo_3sup(t_struct *data, int num1, int num2, int num3);
void		ft_algo_4(t_struct *data, int token);
void		ft_algo_4_manager(t_struct *data);
void		ft_algo_4_1(t_struct *data);
void		ft_algo_4_2(t_struct *data);
void		ft_algo_4_3(t_struct *data);
void		ft_algo_4_3sup(t_struct *data, int nb1, int nb2, int nb3, int nb4);
void		ft_algo_4_4(t_struct *data);
void		ft_algo_5(t_struct *data, int token);
void		ft_algo_5_manager(t_struct *data);
int			ft_algo_5_manager_sup(int n1, int n2, int n3, int n4, int n5);
void		ft_algo_5_1(t_struct *data);
void		ft_algo_5_2(t_struct *data);
void		ft_algo_5_3(t_struct *data);
void		ft_algo_5_4(t_struct *data);
void		ft_algo_5_5(t_struct *data);
void		ft_algo_10(t_struct *data);
void		ft_algo_10_manager(t_struct *data);
int			ft_found_little(t_struct *data);
void		ft_10_action(t_list_a *la, t_struct *data);
int			ft_found_pos_little(t_struct *data);
void		ft_tri_10(t_list_a *la, t_struct *data);
void		push_swap(t_list_a *data);
void		ft_error(void);

#endif