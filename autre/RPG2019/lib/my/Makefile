##
## EPITECH PROJECT, 2019
## My_World
## File description:
## lib Makefile
##

SRC	=	help.c				\
		my_strcmp.c			\
		my_putchar.c			\
		my_putstr.c			\
		menu.c				\
		menu_background.c		\
		loop.c				\
		music_menu.c			\
		music_game.c			\
		pokemon_cry.c			\
		event_menu.c			\
		event_fight.c			\
		menu_sprites.c			\
		button_loop.c			\
		event_game.c			\
		field_event.c			\
		path_event.c			\
		game_background.c		\
		path_background.c		\
		field_background.c		\
		player_sprite.c			\
		player_events.c			\
		destroy_funct.c			\
		set_sprite.c			\
		link_sprite.c			\
		dialog_box.c			\
		event_dialog.c			\
		fight_background.c		\
		house_dialog.c			\
		stat.c				\
		stat_sprites.c			\
		set_mouse_pos.c			\
		fight.c				\
		fight_sprites.c			\
		how.c				\
		event_how.c			\
		time.c				\
		fight_hunter.c			\
		fight_hunter_se.c		\
		game_over.c			\
		fight_link_atk_a.c		\
		fight_runner.c			\
		fight_bow.c			\
		event_animation_bow.c		\
		fight_hunter_bow.c		\
		fight_background_pikachu.c	\
		fight_link_atk_b.c		\
		fight_runnerb.c			\
		fight_runner_sprite.c		\
		fight_win.c			\
		place.c				\
		statb.c				\
		place_event.c

OBJ	=	$(SRC:.c=.o)

NAME	=	Makefile_lib

CFLAGS	=	-I ../../include

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f libmy.a

re:	fclean all

.PHONY: all clean fclean re
