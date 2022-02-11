/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** My.h for My_World_Bootstrap.
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>

#ifndef MY_H_
#define MY_H_

char* help(char *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
int menu(sfRenderWindow* window);
sfSprite *menu_background(sfRenderWindow* window);
sfSprite *game_background(sfRenderWindow* window);
int loop(sfRenderWindow* window, sfSprite* sprite, sfMusic* Music);
sfSprite *how(sfRenderWindow* window);
sfMusic *music_menu(void);
sfMusic *music_game(void);
sfMusic *music_path(void);
sfMusic *music_fight(void);
sfMusic *mewtwo_cry(void);
sfMusic *dracaufeu_cry(void);
sfMusic *pikachu_cry(void);
void my_rpg(sfRenderWindow* window, sfEvent event);
void path(sfRenderWindow* window, sfEvent event, sfVector2f pos);
void field(sfRenderWindow* window, sfMusic* M, sfEvent event, sfVector2f pos);
void fight(sfRenderWindow* window, sfEvent event, sfVector2f Ppos);
sfSprite *play(sfRenderWindow* window);
sfSprite *quit(sfRenderWindow* window);
int how1(sfRenderWindow* window, sfMusic* Music);
int how2(sfRenderWindow* window, sfMusic* Music);
sfSprite *how1_background(sfRenderWindow* window);
sfSprite *how2_background(sfRenderWindow* window);
int event_how(sfRenderWindow* window, sfEvent event, sfSprite* sp, sfMusic* M);
int event_how1(sfRenderWindow* window, sfEvent event, sfMusic* Music);
int event_how2(sfRenderWindow* window, sfEvent event, sfMusic* Music);
sfSprite *Splay(sfRenderWindow* window);
sfSprite *Squit(sfRenderWindow* window);
sfSprite *Sreset(sfRenderWindow* window);
int button_loop(sfRenderWindow* w, sfSprite* Play, sfSprite* Quit, sfSprite* H);
void Sbutton_loop(sfRenderWindow* wind, sfSprite* P, sfSprite* Q, sfSprite* R);
int event_play(sfRenderWindow* window, sfEvent event, sfSprite* s, sfMusic* MM);
int event_quit(sfRenderWindow* window, sfEvent event, sfSprite* sprite);
int stat_play(sfRenderWindow* window, sfEvent event, sfSprite* s, sfMusic* MM);
int stat_quit(sfRenderWindow* window, sfEvent ev, sfSprite* sprite, sfMusic* M);
int stat_reset(sfRenderWindow* window, sfEvent ev, sfSprite* sp, sfMusic* M);
int draw_sprite(sfRenderWindow* window, sfSprite* s, sfIntRect rect);
void event_game(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
void event_path(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
void event_field(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
sfSprite *game_background(sfRenderWindow* window);
sfSprite *path_background(sfRenderWindow* window);
sfSprite *field_background(sfRenderWindow* window);
sfSprite *player_sprite(sfSprite* sprite);
sfIntRect r_event(sfRenderWindow* w, sfEvent ev, sfSprite* sp, sfIntRect rect);
sfIntRect r_event2(sfRenderWindow* w, sfEvent ev, sfSprite* sp, sfIntRect rect);
sfVector2f p_event(sfEvent ev, sfSprite* sp, sfVector2f pos);
sfVector2f p_event2(sfEvent ev, sfSprite* sp, sfVector2f pos);
sfVector2f pevent(sfEvent ev, sfSprite* sp, sfVector2f pos);
sfVector2f pevent2(sfEvent ev, sfSprite* sp, sfVector2f pos);
sfVector2f fevent(sfEvent ev, sfSprite* sp, sfVector2f pos);
sfVector2f fevent2(sfEvent ev, sfSprite* sp, sfVector2f pos);
sfVector2f event_box(sfIntRect r, sfSprite* d, sfVector2f p, sfRenderWindow* w);
void destroy_funct(sfMusic* Music, sfRenderWindow* window, sfSprite* sprite);
void destroy_functs(sfMusic* M, sfRenderWindow* w, sfSprite* s1, sfSprite* s2);
void destroy_field(sfRenderWindow* w, sfSprite* s1, sfSprite* s2, sfSprite* s3);
void set_sprite(sfRenderWindow* window, sfSprite* sprite, sfVector2f pos);
void set_sprites(sfRenderWindow* w, sfSprite* l, sfSprite* d, sfVector2f pos2);
sfSprite *link_sprite(sfSprite* sprite);
sfSprite *dialog_box(sfSprite* sprite);
sfSprite *fight_background(sfRenderWindow* window);
sfSprite *op_sprite(sfSprite* sprite);
sfSprite *pl_sprite(sfSprite* sprite);
void fight(sfRenderWindow* window, sfEvent event, sfVector2f pos);
void event_fight(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
sfSprite *house_dialog(sfSprite* sprite);
sfVector2f ev_sign(sfIntRect r, sfSprite* d, sfVector2f p, sfRenderWindow* w);
void event_stat(sfMusic* GM, sfRenderWindow* w, sfVector2f pos, int i);
int stat(sfRenderWindow* window, sfMusic* M, int i, sfVector2f pos);
sfSprite *stat_background(sfRenderWindow* window);
sfVector2i set_mouse_pos(sfRenderWindow* window, sfVector2i mouse);
void event_fight(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
void mewtwo(sfRenderWindow* window, sfEvent event, sfVector2f pos, sfMusic* M);
void dracaufeu(sfRenderWindow* window, sfEvent ev, sfVector2f pos, sfMusic* M);
void pikachu(sfRenderWindow* window, sfEvent event, sfVector2f pos, sfMusic* M);
sfSprite *fight_mewtwo(sfRenderWindow* window);
sfSprite *fight_dracaufeu(sfRenderWindow* window);
sfSprite *fight_pikachu(sfRenderWindow* window);
sfSprite *fight_pikachub(sfRenderWindow* window);
void event_atk(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
void event_anim(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
void event_anim_se(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
sfSprite *mewtwo_sprite(sfSprite* sprite);
sfSprite *dracaufeu_sprite(sfSprite* sprite);
sfIntRect time(sfClock *clock_a, sfTime time_a, float seconds, sfIntRect rect);
sfIntRect time2(sfClock *clock_a, sfTime time_a, float seconds, sfIntRect rect);
void hunter(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M);
void hunter_se(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M);
sfSprite *hunter_back(sfRenderWindow* window);
sfSprite *pokeball(sfSprite* sprite);
sfVector2f speed(sfRenderWindow* w, sfMusic* M, sfEvent e, sfVector2f pos);
sfVector2f speed_se(sfRenderWindow* w, sfMusic* M, sfEvent e, sfVector2f pos);
sfVector2f hevent(sfRenderWindow* wi, sfEvent ev, sfSprite* sp, sfVector2f pos);
int game_over(sfRenderWindow* wind, sfMusic* m);
sfSprite *go_background(sfRenderWindow* window);
int go_event(sfRenderWindow* wind, sfEvent event, sfMusic* m);
void destroy_h(sfRenderWindow* wind, sfSprite* sprite);
sfVector2f init_pos(sfVector2f pos);
int la_a_event(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m);
sfSprite *la_a_background(sfRenderWindow* window);
int link_atk_a(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m);
void destroy_r(sfRenderWindow* wind, sfSprite* sprite, sfSprite* s);
void runner(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M);
sfSprite *runner_back(sfRenderWindow* window);
sfVector2f revent(sfRenderWindow* wi, sfEvent ev, sfSprite* sp, sfVector2f pos);
sfSprite *bike_sprite(sfSprite* bike);
sfSprite *sword_sprite(sfSprite* sprite);
sfVector2f move_w(sfSprite *weapon, sfVector2f pos_w);
sfVector2f loop_r(sfRenderWindow* w, sfSprite* s, sfMusic* m, sfVector2f p);
int score_runner(int count, sfVector2f pos);
void fightb(sfRenderWindow* window, sfEvent event, sfVector2f pos, sfMusic* m);
void event_atk_bow(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
void mewtwob(sfRenderWindow* window, sfEvent event, sfVector2f pos, sfMusic* M);
void dracaufeub(sfRenderWindow* window, sfEvent ev, sfVector2f pos, sfMusic* M);
void pikachub(sfRenderWindow* window, sfEvent ev, sfVector2f pos, sfMusic* M);
void event_animb_se(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
void event_animb(sfEvent e, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
sfVector2f speedb(sfRenderWindow* w, sfMusic* M, sfEvent e, sfVector2f pos);
sfVector2f speedb_se(sfRenderWindow* w, sfMusic* M, sfEvent e, sfVector2f pos);
void hunterb(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M);
void hunterb_se(sfRenderWindow* wind, sfEvent ev, sfVector2f pos, sfMusic* M);
int la_b_event(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m);
sfSprite *la_b_background(sfRenderWindow* window);
int link_atk_b(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m);
sfSprite *arrow_sprite(sfSprite* sprite);
void runnerb(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* M);
sfVector2f move_w_b(sfSprite *weapon, sfVector2f pos_w);
void game_over_handl(sfRenderWindow* w, sfMusic* M, sfSprite* s, sfSprite* e);
int fight_win(sfRenderWindow* wind, sfEvent event, sfVector2f pos, sfMusic* m);
sfSprite *dialog_place(sfSprite* sprite);
sfVector2f pfevent2(sfEvent ev, sfSprite* sp, sfVector2f pos);
sfVector2f pfevent(sfEvent ev, sfSprite* sp, sfVector2f pos);
void place(sfRenderWindow* window, sfEvent event, sfVector2f pos);
void event_place(sfEvent event, sfMusic* GM, sfRenderWindow* w, sfVector2f pos);
int statb(sfRenderWindow* window, sfMusic* M, int i, sfVector2f pos);
sfSprite *statb_background(sfRenderWindow* window);
sfVector2f box_place(sfIntRect r, sfSprite* d, sfVector2f p, sfRenderWindow* w);
sfSprite *place_background(sfRenderWindow* window);
sfSprite *house_sprite(sfSprite* sprite);

#endif
