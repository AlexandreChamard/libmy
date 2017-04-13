##
## Makefile for ok in /home/alexandre/Documents/lib/my_lib/
##
## Made by Alexandre Chamard-bois
## Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
##
## Started on  Fri Apr  7 15:45:41 2017 Alexandre Chamard-bois
## Last update Thu Apr 13 19:30:49 2017 Alexandre Chamard-bois
##

include ./include/depend.mk

AR	=	ar rc

SRC_MY	=				clean_line.c								\
								match.c											\
								my_atof.c										\
								my_getnbr.c									\
								my_is_prime.c								\
								my_is_str.c									\
								my_memcmp.c									\
								my_memcpy.c									\
								my_memdup.c									\
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
								call_function1.c						\
								call_function2.c						\
								len.c												\

SRC_GNL			=		get_next_line.c							\

SRC_LIST		=		create_list.c								\
								movein_list.c								\
								sort_list.c									\

CFLAGS			+=	-I./include/

SDIR_MY				=	my
SDIR_PRINTF		=	my_printf
SDIR_GNL			=	gnl
SDIR_LIST			=	list

_OBJ_MY    		=	$(SRC_MY:.c=.o)
_OBJ_PRINTF 	=	$(SRC_PRINTF:.c=.o)
_OBJ_GNL    	=	$(SRC_GNL:.c=.o)
_OBJ_LIST    	=	$(SRC_LIST:.c=.o)

OBJ_MY				=	$(patsubst %,$(ODIR)/%,$(_OBJ_MY))
OBJ_PRINTF		=	$(patsubst %,$(ODIR)/%,$(_OBJ_PRINTF))
OBJ_GNL				=	$(patsubst %,$(ODIR)/%,$(_OBJ_GNL))
OBJ_LIST			=	$(patsubst %,$(ODIR)/%,$(_OBJ_LIST))

NAME	=	libmy.a

all		: p_flags $(NAME) success
$(ODIR)/%.o	:	$(SDIR_MY)/%.c
	@ $(CC) $(CFLAGS)	-c -o $@ $<
	@ echo $<
$(ODIR)/%.o	:	$(SDIR_PRINTF)/%.c
	@ $(CC) $(CFLAGS)	-c -o $@ $<
	@ echo $<
$(ODIR)/%.o	:	$(SDIR_LIST)/%.c
	@ $(CC) $(CFLAGS)	-c -o $@ $<
	@ echo $<
$(ODIR)/%.o	:	$(SDIR_GNL)/%.c
	@ $(CC) $(CFLAGS)	-c -o $@ $<
	@ echo $<

mkobj		:
	@ ./tools/verif_odir

p_flags		:
	@ echo "FLAGS:" $(CYAN) $(CFLAGS) $(WHITE)

success		:
	@ echo $(GREEN) "[success]" $(WHITE)

$(NAME)		:	mkobj $(OBJ_MY) mkobj $(OBJ_PRINTF) mkobj $(OBJ_LIST) mkobj $(OBJ_GNL)
						@ $(AR) $(NAME) $(OBJ_MY) $(OBJ_PRINTF) $(OBJ_GNL) $(OBJ_LIST)
						@ ranlib $(NAME)

clean		:
	@ echo -n "nb obj removed: "
	@ echo -en  $(RED)
	@ ls $(ODIR) | wc -w
	@ echo -en $(WHITE)
	@ rm -f $(OBJ_MY)
	@ rm -f $(OBJ_PRINTF)
	@ rm -f $(OBJ_GNL)
	@ rm -f $(OBJ_LIST)

fclean		:	clean
	@ echo "name lib removed:"
	@ echo -e $(RED) '\t-' $(NAME) $(WHITE)
	@ rm -f $(NAME)

re		:	fclean all
