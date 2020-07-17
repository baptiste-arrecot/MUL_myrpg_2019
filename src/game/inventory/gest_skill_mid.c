/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** gest_skill_mid.c
*/

#include "inventory.h"

void gest_skill_mid_two(sfIntRect *rect, player_t *player, int skill,
                        sfEvent *event)
{
    if (skill >= 4 && (*rect).top == 1107
    && event->mouseButton.x >= 365 && event->mouseButton.x <= 435
    && event->mouseButton.y >= 627 && event->mouseButton.y <= 697) {
        (*rect).top = 2583;
        player->armor += 50;
    } else if (skill >= 5 && (*rect).top == 2583
    && event->mouseButton.x >= 365 && event->mouseButton.x <= 435
    && event->mouseButton.y >= 325 && event->mouseButton.y <= 398) {
        (*rect).top = 3321;
        player->strength += 100;
    }
}

void gest_skill_mid(sfIntRect *rect, player_t *player, int skill,
                        sfEvent *event)
{
    if (skill >= 3 && (*rect).top == 738
    && event->mouseButton.x >= 402 && event->mouseButton.x <= 472
    && event->mouseButton.y >= 418 && event->mouseButton.y <= 588) {
        (*rect).top = 1107;
        player->hp += 100;
        player->hp_max += 100;
        player->check = 2;
    } else if (skill >= 4 && (*rect).top == 1107
    && event->mouseButton.x >= 365 && event->mouseButton.x <= 435
    && event->mouseButton.y >= 325 && event->mouseButton.y <= 398) {
        (*rect).top = 2214;
        player->strength += 100;
    } if (skill >= 5 && (*rect).top == 2214
    && event->mouseButton.x >= 365 && event->mouseButton.x <= 435
    && event->mouseButton.y >= 627 && event->mouseButton.y <= 697) {
        (*rect).top = 3321;
        player->armor += 50;
    }
    gest_skill_mid_two(rect, player, skill, event);
}