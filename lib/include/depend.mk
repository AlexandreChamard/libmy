#
# depend.mk for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
#
# Made by Alexandre Chamard-bois
# Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
#
# Started on  Fri Apr  7 15:48:22 2017 Alexandre Chamard-bois
# Last update Fri Apr  7 17:47:17 2017 Alexandre Chamard-bois
#

CC		=	gcc

RELEASE		=	false

OPTI_FLAG	=	-O2

CFLAGS		+=	-W -Wall -Wextra

ifeq	($(RELEASE),true)
 CFLAGS		+=	$(OPTI_FLAG)
 CFLAGS		+=	-Werror -Wno-unused-result
else
 CFLAGS		+=	-O0 -g -Wuninitialized
endif

ODIR		=	obj

SDIR		=	src
