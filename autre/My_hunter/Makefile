##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

NAME	=	my_hunter

CC	=	gcc

RM	=	rm -f

SOURCE	=	./src/

CSFML   =       -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CREATE	=	./src/create/

DISPLAY	=	./src/display/

MANAGE	=	./src/manage/

SPRITES	=	./src/sprites/

WINDOW	=	./src/window/

SRC	=	main.c				\
		$(CREATE)clock.c		\
		$(CREATE)clock_2.c		\
		$(CREATE)clock_fifth.c		\
		$(CREATE)sprite_fifth.c		\
		$(CREATE)sprite_first.c		\
		$(CREATE)sprite_fourth.c	\
		$(CREATE)sprite_second.c	\
		$(CREATE)sprite_third.c		\
		$(DISPLAY)display.c		\
		$(DISPLAY)display_fifth.c	\
		$(DISPLAY)display_window.c	\
		$(DISPLAY)text_gestion.c	\
		$(DISPLAY)text_level.c		\
		$(DISPLAY)text_win.c		\
		$(MANAGE)destroy.c		\
		$(MANAGE)destroy_fifth.c	\
		$(MANAGE)init.c			\
		$(MANAGE)init_menu.c		\
		$(MANAGE)rand_float.c		\
		$(MANAGE)menu_mange.c		\
		$(SPRITES)menu_event.c		\
		$(SPRITES)move_first.c		\
		$(SPRITES)move_fourth.c		\
		$(SPRITES)move_second.c		\
		$(SPRITES)move_third.c		\
		$(SPRITES)target_gestion.c	\
		$(SPRITES)move_fifth.c		\
		$(WINDOW)menu.c			\
		$(WINDOW)first.c		\
		$(WINDOW)life.c			\
		$(WINDOW)game_over.c		\
		$(WINDOW)redirection.c 		\
		$(WINDOW)second.c		\
		$(WINDOW)third.c		\
		$(WINDOW)fourth.c		\
		$(WINDOW)fifth.c		\
		$(WINDOW)win.c			\
		$(WINDOW)how.c

OBJ	=	$(SRC:.c=.o)

LDFlAGS	=	-L ./lib/ -lmy

CPPFLAGS	=	-I ./include/

CFLAGS	=	-Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFlAGS) $(CSFML) -g
	$(RM) -f *.gcda *.gcno

clean:
	make clean -C lib/my
	$(RM) $(NAME)
	$(RM) $(OBJ) *~ \#*\#

fclean: clean
	make fclean -C lib/my

re: fclean all

.PHONY:	all fclean re
