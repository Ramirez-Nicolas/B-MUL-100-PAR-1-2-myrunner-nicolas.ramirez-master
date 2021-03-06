/*
** EPITECH PROJECT, 2020
** functions.c
** File description:
** functions 
*/

#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/Time.h>
#include <SFML/System/Export.h>
#include <SFML/System/Types.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <stdio.h>
#include "../include/my.h"

sfRenderWindow *createwindow(unsigned int widht, unsigned int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    sfMouseMoveEvent mouse;

    video_mode.width = widht;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "Duck Hunt", sfDefaultStyle, NULL);
}

void close_window(sfRenderWindow *window)
{
    sfEvent event;

    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void move_rect(sfIntRect *test, sfIntRect *rect2, sfIntRect *rect3)
{
    test->left += 40;
    if (test->left > 80)
        test->left = 0;
    rect2->left += 32;
    if (rect2->left > 32)
        rect2->left = 32;
    rect3->left += 32;
    if (rect3->left > 32)
        rect3->left = 32;
}

void move_rect6(sfIntRect *rect6)
{
    rect6->left += 60;
    if (rect6->left > 120)
        rect6->left = 120;
}

void epitech(sfSprite *sprite2, sfVector2f vector)
{
    sfSprite_setPosition(sprite2, vector);
}
