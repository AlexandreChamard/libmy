##
## Makefile for ok in /home/alexandre/Documents/lib/my_lib/
##
## Made by Alexandre Chamard-bois
## Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
##
## Started on  Fri Apr  7 15:45:41 2017 Alexandre Chamard-bois
## Last update Wed Apr 12 22:55:01 2017 Alexandre Chamard-bois
##

include ./include/depend.mk

AR	=	ar rc

SRC_MY	=				clean_line.c								\
								my_atof.c										\
								my_getnbr.c									\
								my_is_prime.c								\
								my_is_str.c									\
								my_memset.c									\
								my_nb_line.c								\
								my_power_rec.c							\
								my_puts.c										\
								my_revstr.c									\
								my_show_wordtab.c						\
								my_showmem.c								\
								my_sort_int_tab.c						\
								my_split.c									\
								my_square_root.c						\
								my_str_isnum.c							\
								my_str_to_wordtab.c					\
								my_strcapitalize.c					\
								my_strcat.c									\
								my_strcmp.c									\
								my_strcpy.c									\
								my_strdup.c									\
								my_strlen.c									\
								my_strstr.c									\
								my_strtoc.c									\
								my_swap.c										\

SRC_PRINTF	=		myprintf.c									\
								start.c											\
								str.c												\
								nbr.c												\
								my_realloc.c								\
								my_strlen.c									\
								call_function1.c						\
								call_function2.c						\

SRC_GNL			=		get_next_line.c							\

CFLAGS			+=	-I./include/

SDIR_MY				=	my
SDIR_PRINTF		=	my_printf
SDIR_GNL			=	gnl

_OBJ_MY    		=	$(SRC_MY:.c=.o)
_OBJ_PRINTF 	=	$(SRC_PRINTF:.c=.o)
_OBJ_GNL    	=	$(SRC_GNL:.c=.o)

OBJ_MY				=	$(patsubst %,$(ODIR)/%,$(_OBJ_MY))
OBJ_PRINTF		=	$(patsubst %,$(ODIR)/%,$(_OBJ_PRINTF))
OBJ_GNL				=	$(patsubst %,$(ODIR)/%,$(_OBJ_GNL))

NAME	=	libmy.a

all		:	$(NAME)

$(ODIR)/%.o	:	$(SDIR_MY)/%.c
	$(CC) $(CFLAGS)	-c -o $@ $<
$(ODIR)/%.o	:	$(SDIR_PRINTF)/%.c
	$(CC) $(CFLAGS)	-c -o $@ $<
$(ODIR)/%.o	:	$(SDIR_GNL)/%.c
	$(CC) $(CFLAGS)	-c -o $@ $<

mkobj		:
	./tools/verif_objdir

$(NAME)		:	mkobj $(OBJ_MY) mkobj $(OBJ_PRINTF) mkobj $(OBJ_GNL)
						$(AR) $(NAME) $(OBJ_MY) $(OBJ_PRINTF) $(OBJ_GNL)
						ranlib $(NAME)

clean		:
	rm -f $(OBJ_MY)
	rm -f $(OBJ_PRINTF)
	rm -f $(OBJ_GNL)

fclean		:	clean
	rm -f $(NAME)

re		:	fclean all
