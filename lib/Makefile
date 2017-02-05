##
## Makefile for makefile in /home/Alex.Chamardbois/CPool/CPool_Day10/lib/my
##
## Made by Alexandre Chamard-bois
## Login   <Alex.Chamardbois@epitech.net>
##
## Started on  Mon Oct 17 08:26:48 2016 Alexandre Chamard-bois
## Last update Sun Feb  5 16:46:29 2017 Alexandre Chamard-bois
##

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra

CFLAGS	=	-I./include

SRCS	=				my/my_getnbr.c									\
							my/my_isneg.c										\
							my/my_is_prime.c								\
							my/my_power_rec.c								\
							my/my_putchar.c									\
							my/my_revstr.c									\
							my/my_showmem.c									\
							my/my_showstr.c									\
							my/my_show_wordtab.c						\
							my/my_sort_int_tab.c						\
							my/my_square_root.c							\
							my/my_strcapitalize.c						\
							my/my_strcat.c									\
							my/my_strcmp.c									\
							my/my_strcpy.c									\
							my/my_str_isalpha.c							\
							my/my_str_islower.c							\
							my/my_str_isnum.c								\
							my/my_str_isprintable.c					\
							my/my_str_isupper.c							\
							my/my_strlen.c									\
							my/my_strlowcase.c							\
							my/my_strncat.c									\
							my/my_strncmp.c									\
							my/my_strncpy.c									\
							my/my_strstr.c									\
							my/my_str_to_wordtab.c					\
							my/my_strupcase.c								\
							my/my_swap.c										\
							my/my_strdup.c									\
							my/my_nb_line.c									\

SRCS			+=	my_printf/myprintf.c						\
							my_printf/start.c								\
							my_printf/str.c									\
							my_printf/nbr.c									\
							my_printf/my_realloc.c					\
							my_printf/my_strlen.c						\
							my_printf/call_function1.c			\
							my_printf/call_function2.c			\

SRCS			+=	get_next_line/get_next_line.c		\

OBJS	=	$(SRCS:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
