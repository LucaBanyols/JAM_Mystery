/*
** EPITECH PROJECT, 2020
** hunter.h
** File description:
** hunter.h
*/

#include "my.h"
#include "struct.h"
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>

#ifndef MY_HUNTER_
#define MY_HUNTER_

//MANAGE

void manage_menu(sfRenderWindow *window, sfSprite *how, global *glo);
void bonus(global *glo);
void redirection_4(sfRenderWindow *win, global *glo, sprites *sp, fourth *fo);
void redirection_3(sfRenderWindow *win, global *glo, sprites *sp, third *th);
void redirection_2(sfRenderWindow *win, global *glo, sprites *sp);
void manage_second(sfRenderWindow *w, sprites *sp);
char *getstr(int nb);
float random_float(float x, float a);
void redirection(sfRenderWindow *win, global *glo, sprites *sp);
void manage_first(sfRenderWindow *w, sprites *sp);

//DESTROY

void destroy_fifth(sfRenderWindow* win, global *glo, fifth *fi);
void destroy_fourth(sfRenderWindow* win, fourth *fo);
void destroy_third(sfRenderWindow* win, third *th);
void destroy_second(sfRenderWindow* window, sprites *sp);
void destroy_over(sfSprite over, sfMusic o_music, sfRenderWindow *win);
void destroy_menu(sfRenderWindow* window, global *glo, sfSprite *how);
void destroy_first(sfRenderWindow* window, global *glo, sprites *sp);

//INITIALIZATION

void fifth_init(sprites *sp, global *glo, fifth *fi);
void fourth_init(sprites *sp, global *glo, fourth *fo);
void third_init(sprites *sp, global *glo, third *th);
void second_init(sprites *sp, global *glo);
void first_init(sprites *sp, global *glo);
void menu_init(global *glo);

//MUSIC

sfMusic *how_music(void);
sfMusic *win_music(void);
sfMusic *over_music(void);
sfMusic *menu_music(void);

//AFFICHAGE

void text_d(sfRenderWindow *window);
void text_dev(sfRenderWindow* window);
void win_text(sfRenderWindow* window);
void text_win(sfRenderWindow* window, global *glo);
sfSprite *display_win(void);
void display_fifth(sfRenderWindow *window, global *glo, fifth *fi);
void display_fourth(sfRenderWindow *window, global *glo, fourth *fo);
void display_third(sfRenderWindow *window, global *glo, third *th);
void display_poke(sfRenderWindow *window, global *glo);
void score(sfRenderWindow* window);
void text_level(sfRenderWindow* window, sprites *sp);
void display_second(sfRenderWindow *window, sprites *sp, global *glo);
void text_over(sfRenderWindow* window, global *glo);
void text_score(sfRenderWindow* window, global *glo, sprites *sp);
void display_first(sfRenderWindow *window, sprites *sp, global *glo);
void display_window(sfRenderWindow *window, global *glo, sfMusic *music);
void button_loop(sfRenderWindow* window, global *glo, sfSprite *how);

//SPRITE GESTION

void event_how(sfRenderWindow *win, sfEvent event, sfSprite *spr, global *glo);
void life_final(global *glo, sfRenderWindow *window, sfMusic *m);
void move_fifth(sprites *sp, global *glo, fifth *fi);
void move_red_2(sprites *sp, fifth *fi);
void move_dracaufeu_2(sprites *sp, global *glo, fifth *fi);
void move_gold_2(sprites *sp, fifth *fi);
void move_ohoh(sprites *sp, global *glo, fifth *fi);
void target_fourth(sfSprite *s, global *glo, sprites *sp, sfRenderWindow *win);
void move_lugia(sprites *sp, global *glo);
void move_gold(sprites *sp);
void target_second(sfSprite *s, global *glo, sprites *sp, sfRenderWindow *w);
void move_fourth(sprites *sp, global *glo, fourth *fo);
void move_louka(sprites *sp, fourth *fo);
void move_carchacrok(sprites *sp, global *glo, fourth *fo);
void move_arceus(sprites *sp, global *glo, fourth *fo);
void move_latios(sprites *sp, global *glo, third *th);
void move_latias(sprites *sp, global *glo, third *th);
void move_brice(sprites *sp, third *th);
void move_third(sprites *sp, global *glo, third *th);
void move_second(sprites *sp, global *glo);
void life_gestion(global *glo, sfRenderWindow* window, sfMusic *m);
void event_play(sfRenderWindow* window, sfEvent event, global *glo);
void event_quit(sfRenderWindow* window, sfEvent event, global *glo);
void target_gestion(sfSprite *s, global *glo, sprites *sp, sfRenderWindow *win);
void move_red(sprites *sp);
void move_dracaufeu(sprites *sp, global *glo);
void event_quit(sfRenderWindow* window, sfEvent event, global *glo);
void event_play(sfRenderWindow* window, sfEvent event, global *glo);
void move_first(sprites *sp, global *glo);

//CREATE SPRITE

sfSprite *how_button(void);
sfSprite *how_back(void);
sfSprite *red_2(sfSprite *red, fifth *fi);
sfSprite *dracaufeu_2(sfSprite *dracaufeu, fifth *fi, sprites *sp);
sfSprite *ohoh(sfSprite *ohoh, fifth *fi, sprites *sp);
sfSprite *gold_2(sfSprite *gold, fifth *fi);
sfSprite *create_sprite_fifth(int nb);
sfSprite *create_sprite_third(void);
sfSprite *create_sprite_fourth(void);
sfSprite *poke(void);
sfSprite *create_sprite_second(void);
sfSprite *display_over(void);
sfSprite *louka(sfSprite *louka, fourth *fo);
sfSprite *arceus(sfSprite *arceus, fourth *fo);
sfSprite *carchacrok(void);
sfSprite *brice(sfSprite *brice, third *th);
sfSprite *latias(void);
sfSprite *latios(void);
sfSprite *gold(sfSprite *gold, global *glo);
sfSprite *lugia(sfSprite *lugia, global *glo);
sfSprite *life(sfSprite *life, global *glo);
sfSprite *create_sprite_first(void);
sfSprite *dracaufeu(sfSprite *dracaufeu, global *glo);
sfSprite *red(sfSprite *red, global *glo);
sfSprite *play_button(void);
sfSprite *quit_button(void);
sfSprite *menu_background(void);

//CLOCK

sfIntRect clock_red_2(sfClock *clock_r, fifth *fi);
sfIntRect clock_dracaufeu_2(sfClock *clock_d, fifth *fi);
sfIntRect clock_gold_2(sfClock *clock_g, fifth *fi);
sfIntRect clock_ohoh(sfClock *clock_o, fifth *fi);
sfIntRect clock_louka(sfClock *clock_lo, fourth *fo);
sfIntRect clock_arceus(sfClock *clock_a, fourth *fo);
sfIntRect clock_brice(sfClock *clock_b, third *th);
sfIntRect clock_poke(sfClock *clock_p, global *glo, sfIntRect rect);
sfIntRect clock_gold(sfClock *clock_g, global *glo, sprites *sp);
sfIntRect clock_lugia(sfClock *clock_lu, global *glo, sprites *sp);
sfIntRect clock_dracaufeu(sfClock *clock_d, global *glo, sprites *sp);
sfIntRect clock_red(sfClock *clock_r, global *glo, sprites *sp);

//MAIN FONCTION

void how(sfRenderWindow* win);
void win(global *glo, sfRenderWindow *win);
void fifth_stage(sfRenderWindow* window, global *glo, sprites *sp);
void fourth_stage(sfRenderWindow* window, global *glo, sprites *sp);
void third_stage(sfRenderWindow* window, global *glo, sprites *sp);
void second_stage(sfRenderWindow* window, global *glo, sprites *sp);
void first_stage(sfRenderWindow* window, global *glo);
void launch_menu(sfRenderWindow *window);
void game_over(global *glo, sfRenderWindow *win);

#endif
