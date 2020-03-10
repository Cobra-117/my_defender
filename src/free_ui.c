/*
** EPITECH PROJECT, 2020
** free ui
** File description:
** free ui
*/

#include "../include/my.h"

void destroy_ui_textures(Index_t *index)
{
    sfTexture_destroy(index->ui_bunker.bunker_tex);
    sfTexture_destroy(index->ui_info.money_tex);
    sfTexture_destroy(index->ui.tex_socle);
    sfTexture_destroy(index->ui_utilities.mine_ui_tex);
    sfTexture_destroy(index->ui_utilities.tchernobyl_ui_tex);
    sfTexture_destroy(index->ui_skills.arti_sk_tex);
    sfTexture_destroy(index->ui_skills.casu_sk_tex);
    sfTexture_destroy(index->ui_skills.heavy_sk_tex);
    sfTexture_destroy(index->ui_skills.flame_sk_tex);
    sfTexture_destroy(index->ui_skills.tesla_sk_tex);
    sfTexture_destroy(index->lifebar.green_tex);
    sfTexture_destroy(index->lifebar.red_tex);
}

void destroy_ui_sprites(Index_t *index)
{
    sfSprite_destroy(index->ui_bunker.bunker_spr);
    sfSprite_destroy(index->ui_info.money_spr);
    sfSprite_destroy(index->ui.spri_socle);
    sfSprite_destroy(index->ui_utilities.mine_ui_spr);
    sfSprite_destroy(index->ui_utilities.tchernobyl_ui_spr);
    sfSprite_destroy(index->ui_skills.arti_sk_spr);
    sfSprite_destroy(index->ui_skills.casu_sk_spr);
    sfSprite_destroy(index->ui_skills.heavy_sk_spr);
    sfSprite_destroy(index->ui_skills.flame_sk_spr);
    sfSprite_destroy(index->ui_skills.tesla_sk_spr);
    sfSprite_destroy(index->lifebar.green_spr);
    sfSprite_destroy(index->lifebar.red_spr);
}

void destroy_rectangles(Index_t *index)
{
    sfRectangleShape_destroy(index->ui_button_skills.button_casu2);
    sfRectangleShape_destroy(index->ui_button_skills.button_heavy2);
    sfRectangleShape_destroy(index->ui_button_skills.button_arti2);
    sfRectangleShape_destroy(index->ui_button_skills.button_flame2);
    sfRectangleShape_destroy(index->ui_button_skills.button_tesla2);
    sfRectangleShape_destroy(index->ui_button_utilities.button_mine);
    sfRectangleShape_destroy(index->ui_button_utilities.button_order);
    sfRectangleShape_destroy(index->ui_button_utilities.button_tchernobyl);
    sfRectangleShape_destroy(index->ui_button_utilities.button_upgrade2);
    sfRectangleShape_destroy(index->ui_button_turret.button_arti);
    sfRectangleShape_destroy(index->ui_button_turret.button_casu);
    sfRectangleShape_destroy(index->ui_button_turret.button_heavy);
    sfRectangleShape_destroy(index->ui_button_turret.button_flamme);
    sfRectangleShape_destroy(index->ui_button_turret.button_tesla);
    sfRectangleShape_destroy(index->ui_pause_button.button_exit);
    sfRectangleShape_destroy(index->ui_pause_button.button_resume);
    sfRectangleShape_destroy(index->ui_pause_button.button_go_menu);
}

void free_text(Index_t *index)
{
    sfText_destroy(index->text_skills.txt_casu2);
    sfText_destroy(index->text_skills.txt_heavy2);
    sfText_destroy(index->text_skills.txt_arti2);
    sfText_destroy(index->text_skills.txt_flame2);
    sfText_destroy(index->text_skills.txt_tesla2);
    sfText_destroy(index->text_skills.txt_upgrade);
    sfText_destroy(index->text_skills.txt_price_upgrade);
    sfText_destroy(index->ui_text_utilities.txt_mine);
    sfText_destroy(index->ui_text_utilities.txt_order);
    sfText_destroy(index->ui_text_utilities.txt_tchernobyl);
    sfText_destroy(index->ui_text_utilities.txt_upgrade);
    sfText_destroy(index->ui_text.txt_arti);
    sfText_destroy(index->ui_text.txt_casu);
    sfText_destroy(index->ui_text.txt_flamme);
    sfText_destroy(index->ui_text.txt_money);
    sfText_destroy(index->ui_text.txt_skill);
    sfText_destroy(index->ui_text.txt_tesla);
    sfText_destroy(index->ui_text.txt_tower);
    sfText_destroy(index->ui_text.txt_utility);
}

void free_ui(Index_t *index)
{
    free_text(index);
    destroy_rectangles(index);
    destroy_ui_sprites(index);
    destroy_ui_textures(index);
    sfFont_destroy(index->ui_text.font);
    sfFont_destroy(index->ui_text.font2);
    sfClock_destroy(index->time.clock);
}