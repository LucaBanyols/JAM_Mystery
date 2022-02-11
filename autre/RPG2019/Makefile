##
## EPITECH PROJECT, 2019
## My_World
## File description:
## Compilation makefile
##

SRC	=	main.c

RM	=	rm -f

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-I include

LIBS	=	-lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

LIB	=	lib/my/libmy.a

GCC	=	gcc -o $(NAME)

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my/
	$(GCC) $(LIBS) main.c -L. $(LIB)

clean:
	$(RM) $(OBJ)
	$(RM) ./lib/my/*.o
	$(RM) ./lib/my/*.c~
	$(RM) ./include/*.h~
	$(RM) *.c~
	$(RM) lib/my/Makefile~
	$(RM) Makefile~

fclean: clean
	$(RM) $(NAME)
	$(RM) ./lib/my/libmy.a

re:	fclean all

.PHONY: all clean fclean re
