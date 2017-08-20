#
# depend.mk for ok in /home/alexandre/Documents/lib/my_lib/lib/include/
#
# Made by Alexandre Chamard-bois
# Login   <alexandre.chamard-bois@epitech.eu@epitech.eu>
#
# Started on  Fri Apr  7 15:48:22 2017 Alexandre Chamard-bois
# Last update Sun Aug 20 22:02:55 2017 Alexandre Chamard-bois
#

CC		=	gcc

RELEASE		=	true

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

BLACK		= '\033[1;30m'
RED			= '\033[1;31m'
GREEN		= '\033[1;92m'
YELLOW	= '\033[1;33m'
BLUE		= '\033[1;34m'
MAGENTA	= '\033[1;35m'
CYAN		= '\033[1;36m'
WHITE		= '\033[0;97m'
