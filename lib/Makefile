##
## Makefile for ok in /home/alexandre/Documents/lib/my_lib/
##
## Made by Alexandre Chamard-bois
## Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
##
## Started on  Fri Apr  7 15:45:41 2017 Alexandre Chamard-bois
## Last update Sun Aug 20 22:08:10 2017 Alexandre Chamard-bois
##

include ./include/depend.mk

AR	=	ar rc

SRC_MY	=				cat.c												\
								clean_line.c								\
								cmp.c												\
								cpy.c												\
								dup.c												\
								match.c											\
								my_atof.c										\
								my_fd.c											\
								my_free_tab.c								\
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
								my_strlen.c									\
								my_strstr.c									\
								my_strtok.c									\
								my_swap.c										\

SRC_PRINTF	=		myprintf.c									\
								start.c											\
								str.c												\
								nbr.c												\
								printf_realloc.c						\
								call_function1.c						\
								call_function2.c						\
								len.c												\

SRC_GNL			=		get_next_line.c							\
								my_getline.c								\

SRC_LIST		=		create_list.c								\
								movein_list.c								\
								sort_list.c									\

SRC_SCAN		=		my_scanf.c									\
								scan.c											\
								scan_str.c									\
								scan_nb.c										\
								scan_nb_base.c							\
								scan_nb_format.c						\
								get_format.c								\

SRC_GARBAGE	=		init_garbage.c							\
								gopen.c											\
								gclose.c										\
								my_malloc.c									\
								my_free.c										\

CFLAGS			+=	-I./include/

SDIR_MY				=	my
SDIR_PRINTF		=	printf
SDIR_GNL			=	gnl
SDIR_LIST			=	list
SDIR_SCAN			=	scanf
SDIR_GARBAGE	=	garbage

_OBJ_MY    		=	$(SRC_MY:.c=.o)
_OBJ_PRINTF 	=	$(SRC_PRINTF:.c=.o)
_OBJ_GNL    	=	$(SRC_GNL:.c=.o)
_OBJ_LIST    	=	$(SRC_LIST:.c=.o)
_OBJ_SCAN    	=	$(SRC_SCAN:.c=.o)
_OBJ_GARBAGE  =	$(SRC_GARBAGE:.c=.o)

OBJ_MY				=	$(patsubst %,$(ODIR)/%,$(_OBJ_MY))
OBJ_PRINTF		=	$(patsubst %,$(ODIR)/%,$(_OBJ_PRINTF))
OBJ_GNL				=	$(patsubst %,$(ODIR)/%,$(_OBJ_GNL))
OBJ_LIST			=	$(patsubst %,$(ODIR)/%,$(_OBJ_LIST))
OBJ_SCAN			=	$(patsubst %,$(ODIR)/%,$(_OBJ_SCAN))
OBJ_GARBAGE		=	$(patsubst %,$(ODIR)/%,$(_OBJ_GARBAGE))

NAME	=	libmy.a

all		: p_flags mkobj $(NAME) success

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
$(ODIR)/%.o	:	$(SDIR_SCAN)/%.c
	@ $(CC) $(CFLAGS)	-c -o $@ $<
	@ echo $<
$(ODIR)/%.o	:	$(SDIR_GARBAGE)/%.c
	@ $(CC) $(CFLAGS)	-c -o $@ $<
	@ echo $<

mkobj		:
	@ ./tools/verif_odir

verifodir		:
	@ ./tools/verif_odir

p_flags		:
	@ echo "FLAGS:" $(CYAN) $(CFLAGS) $(WHITE)

success		:
	@ echo $(GREEN) "[success]" $(WHITE)

$(NAME)		:	$(OBJ_MY) $(OBJ_PRINTF) $(OBJ_LIST) $(OBJ_GNL) $(OBJ_SCAN) $(OBJ_GARBAGE)
						@ $(AR) $(NAME) $(OBJ_MY) $(OBJ_PRINTF) $(OBJ_GNL) $(OBJ_LIST) $(OBJ_SCAN) $(OBJ_GARBAGE)
						@ ranlib $(NAME)

clean		: verifodir
	@ echo -n "nb obj removed: "
	@ echo -en  $(RED)
	@ ls $(ODIR) | wc -w
	@ echo -en $(WHITE)
	@ rm -rf $(ODIR)

fclean		:	clean
	@ echo "name lib removed:"
	@ echo -e $(RED) '\t-' $(NAME) $(WHITE)
	@ rm -f $(NAME)

re		:	fclean all
