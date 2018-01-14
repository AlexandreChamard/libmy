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

AR		=	ar rc

SRC		=

CFLAGS		+=	-I./include/

SDIR		=	my

_OBJ		=	$(SRC:.c=.o)

OBJ		=	$(patsubst %,$(ODIR)/%,$(_OBJ))

NAME		=	libmy.a

all		:	verifodir p_flags $(NAME) success

$(ODIR)/%.o	:	$(SDIR)/%.c
			@ $(CC) $(CFLAGS)	-c -o $@ $<
			@ echo $<

verifodir	:
			@ ./tools/verif_odir

cleanodir	:
			@ ./tools/verif_odir

p_flags		:
			@ echo "FLAGS:" $(CYAN) $(CFLAGS) $(WHITE)

success		:
			@ echo $(GREEN) "[success]" $(WHITE)

$(NAME)		:	$(OBJ)
			@ $(AR) $(NAME) $(OBJ)
			@ ranlib $(NAME)

clean		:	cleanodir
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
