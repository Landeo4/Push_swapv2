NAME	=	Push_Swap

SRCS	=	srcs/main.c\
			srcs/Libft/ft_isdigit.c\
			srcs/Libft/ft_strlen.c\
			srcs/Libft/ft_atoi.c\
			srcs/Libft/ft_atol.c\
			srcs/Libft/ft_putstr_fd.c\
			srcs/List/ft_addAt.c\
			srcs/List/ft_create_cell.c\
			srcs/List/ft_first_list.c\
			srcs/List/ft_free_both.c\
			srcs/List/ft_free_list.c\
			srcs/List/ft_freeAt.c\
			srcs/List/ft_getAt.c\
			srcs/List/ft_len_lista.c\
			srcs/List/ft_print_list.c\
			srcs/List/ft_init_struct.c\
			srcs/Parsing/ft_verif_input.c\
			srcs/Parsing/ft_verif_existing.c\
			srcs/Parsing/ft_verif_duplicate.c\
			srcs/Parsing/ft_verif_int.c\
			srcs/Parsing/ft_parsing_manager.c\
			srcs/Parsing/ft_check_var.c\
			srcs/Action/sa.c\
			srcs/Action/sb.c\
			srcs/Action/pa.c\
			srcs/Action/pb.c\
			srcs/Action/ra.c\
			srcs/Action/rb.c\
			srcs/Action/rra.c\
			srcs/Action/rrb.c\
			srcs/Algorithm/ft_algo_manager.c\
			srcs/Algorithm/ft_algo_4.c\
			srcs/Algorithm/ft_algo_3.c\
			srcs/Algorithm/ft_algo_5.c\
			srcs/Algorithm/ft_algo_10.c\


OBJS= $(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra -g3 -g
.c.o:
		${CC} ${CFLAGS} -Iincludes -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -rf ${OBJS}

fclean:		clean
			rm -rf ${NAME}

re:			fclean all

.PHONY:	all clean fclean re