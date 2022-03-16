/*
** EPITECH PROJECT, 2020
** window_open.c
** File description:
** open a window
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
#include "./include/my.h"

int main(void)
{
    sfRenderWindow *window;
    sfMouseMoveEvent mouse;
    sfMouseMoveEvent mouse4;
    sfColor sfBlue = sfColor_fromRGB(0, 200, 255);
    sfBool resetRect;
    sfClock *clock;
    sfTime time;
    float seconds;
    sfEvent event;
    sfTexture *texture4;
    sfTexture *texture41;
    sfTexture *texture5;
    sfTexture *texture7;
    sfTexture *texture71;
    sfTexture *texture9;
    sfTexture *texture91;
    sfTexture *texture8;
    sfTexture *texture10;
    sfTexture *texture11;
    sfTexture *texture12;
    sfTexture *texture13;
    sfTexture *texture14;
    sfTexture *texture15;
    sfSprite *sprite4;
    sfSprite *sprite41;
    sfSprite *sprite5;
    sfSprite *sprite7;
    sfSprite *sprite71;
    sfSprite *sprite8;
    sfSprite *sprite9;
    sfSprite *sprite91;
    sfSprite *sprite10;
    sfSprite *sprite11;
    sfSprite *sprite12;
    sfSprite *sprite13;
    sfSprite *sprite14;
    sfSprite *sprite15;
    sfIntRect rect5;
    sfVector2f dog = sfSprite_getPosition(sprite5);
    sfVector2f mountain;
    sfVector2f mountain2;
    sfVector2f mountain3;
    sfVector2f mountain4;
    sfVector2f mountain5;
    sfVector2f mountain6;
    sfVector2f clouds7;
    sfVector2f clouds8;
    sfVector2f clouds9;
    sfVector2f clouds10;
    sfVector2f ground11;
    sfVector2f ground12;

    window = createwindow(1920, 1080);
    rect5.top = 0;
    rect5.left = 0;
    rect5.width = 300;
    rect5.height = 400;
    texture4 = sfTexture_createFromFile("./image/PNG/png/layers/rocks_3.png", NULL);
    texture41 = sfTexture_createFromFile("./image/PNG/png/layers/rocks_3.png", NULL);
    texture7 = sfTexture_createFromFile("./image/PNG/png/layers/rocks_2.png", NULL);
    texture71 = sfTexture_createFromFile("./image/PNG/png/layers/rocks_2.png", NULL);
    texture8 = sfTexture_createFromFile("./image/PNG/png/layers/sky.png", NULL);
    texture9 = sfTexture_createFromFile("./image/PNG/png/layers/rocks_1.png", NULL);
    texture91 = sfTexture_createFromFile("./image/PNG/png/layers/rocks_1.png", NULL);
    texture10 = sfTexture_createFromFile("./image/PNG/png/layers/clouds_1.png", NULL);
    texture11 = sfTexture_createFromFile("./image/PNG/png/layers/clouds_1.png", NULL);
    texture12 = sfTexture_createFromFile("./image/PNG/png/layers/clouds_2.png", NULL);
    texture13 = sfTexture_createFromFile("./image/PNG/png/layers/clouds_2.png", NULL);
    texture14 = sfTexture_createFromFile("./image/ground.png", NULL);
    texture15 = sfTexture_createFromFile("./image/ground.png", NULL);
    texture5 = sfTexture_createFromFile("./image/personages.png", NULL);
    sprite4 = sfSprite_create();
    sprite41 = sfSprite_create();
    sprite5 = sfSprite_create();
    sprite7 = sfSprite_create();
    sprite71 = sfSprite_create();
    sprite8 = sfSprite_create();
    sprite9 = sfSprite_create();
    sprite91 = sfSprite_create();
    sprite10 = sfSprite_create();
    sprite11 = sfSprite_create();
    sprite12 = sfSprite_create();
    sprite13 = sfSprite_create();
    sprite14 = sfSprite_create();
    sprite15 = sfSprite_create();
    sfSprite_setPosition(sprite4, (sfVector2f) {0, 0});
    sfSprite_setPosition(sprite41, (sfVector2f) {1920, 0});
    sfSprite_setPosition(sprite5, (sfVector2f) {-10, 840});
    sfSprite_setPosition(sprite7, (sfVector2f) {0, 0});
    sfSprite_setPosition(sprite71, (sfVector2f) {1920, 0});
    sfSprite_setPosition(sprite8, (sfVector2f) {0, 0});
    sfSprite_setPosition(sprite9, (sfVector2f) {0, 0});
    sfSprite_setPosition(sprite91, (sfVector2f) {1920, 0});
    sfSprite_setPosition(sprite10, (sfVector2f) {0, 0});
    sfSprite_setPosition(sprite11, (sfVector2f) {1920, 0});
    sfSprite_setPosition(sprite12, (sfVector2f) {0, 0});
    sfSprite_setPosition(sprite13, (sfVector2f) {1920, 0});
    sfSprite_setPosition(sprite14, (sfVector2f) {0, 800});
    sfSprite_setPosition(sprite15, (sfVector2f) {1920, 800});
    sfSprite_setScale(sprite4, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite41, (sfVector2f) {1, 1});    
    sfSprite_setScale(sprite5, (sfVector2f) {0.5, 0.5});
    sfSprite_setScale(sprite7, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite71, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite8, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite9, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite91, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite10, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite11, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite12, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite13, (sfVector2f) {1, 1});
    sfSprite_setScale(sprite14, (sfVector2f) {0.5, 0.5});
    sfSprite_setScale(sprite15, (sfVector2f) {0.5, 0.5});
    sfSprite_setTexture(sprite4, texture4, sfFalse);
    sfSprite_setTexture(sprite41, texture41, sfFalse);
    sfSprite_setTexture(sprite5, texture5, sfFalse);
    sfSprite_setTexture(sprite7, texture7, sfFalse);
    sfSprite_setTexture(sprite71, texture71, sfFalse);
    sfSprite_setTexture(sprite9, texture9, sfFalse);
    sfSprite_setTexture(sprite91, texture91, sfFalse);
    sfSprite_setTexture(sprite10, texture10, sfFalse);
    sfSprite_setTexture(sprite11, texture11, sfFalse);
    sfSprite_setTexture(sprite8, texture8, sfFalse);
    sfSprite_setTexture(sprite12, texture12, sfFalse);
    sfSprite_setTexture(sprite13, texture13, sfFalse);
    sfSprite_setTexture(sprite14, texture14, sfFalse);
    sfSprite_setTexture(sprite15, texture15, sfFalse);
    clock = sfClock_create();
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            close_window(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 50000.0;
        if (seconds > 1.0)
        {
            if (sprite5 != NULL)
                sfSprite_setTextureRect(sprite5, rect5);
            sfClock_restart(clock);
        }
        sfSprite_move(sprite4, (sfVector2f) {-0.1, 0});
        sfSprite_move(sprite41, (sfVector2f) {-0.1, 0});
        sfSprite_move(sprite7, (sfVector2f) {-0.3, 0});
        sfSprite_move(sprite71, (sfVector2f) {-0.3, 0});
        sfSprite_move(sprite9, (sfVector2f) {-0.6, 0});
        sfSprite_move(sprite91, (sfVector2f) {-0.6, 0});
        sfSprite_move(sprite10, (sfVector2f) {-0.1, 0});
        sfSprite_move(sprite11, (sfVector2f) {-0.1, 0});
        sfSprite_move(sprite12, (sfVector2f) {-0.2, 0});
        sfSprite_move(sprite13, (sfVector2f) {-0.2, 0});
        sfSprite_move(sprite14, (sfVector2f) {-1, 0});
        sfSprite_move(sprite15, (sfVector2f) {-1, 0});
        sfRenderWindow_drawSprite(window, sprite8, NULL);
        sfRenderWindow_drawSprite(window, sprite4, NULL);
        sfRenderWindow_drawSprite(window, sprite41, NULL);
        sfRenderWindow_drawSprite(window, sprite7, NULL);
        sfRenderWindow_drawSprite(window, sprite71, NULL);
        sfRenderWindow_drawSprite(window, sprite9, NULL);
        sfRenderWindow_drawSprite(window, sprite91, NULL);
        sfRenderWindow_drawSprite(window, sprite10, NULL);
        sfRenderWindow_drawSprite(window, sprite11, NULL);
        sfRenderWindow_drawSprite(window, sprite12, NULL);
        sfRenderWindow_drawSprite(window, sprite13, NULL);
        sfRenderWindow_drawSprite(window, sprite14, NULL);
        sfRenderWindow_drawSprite(window, sprite15, NULL);
        if (sprite5 != NULL) {
            rect5.left += 270;
            if (rect5.left > 1080)
                rect5.left = 0;
            dog = sfSprite_getPosition(sprite5);
            if (dog.x == 880 && dog.y == 860) {
                sfSprite_destroy(sprite5);
                sprite5 = NULL;
                sfTexture_destroy(texture5);
            }
            mountain = sfSprite_getPosition(sprite4);
            if (mountain.x <= -1920) {
                sfSprite_setPosition(sprite4, (sfVector2f) {1920, 0});
                }
            mountain2 = sfSprite_getPosition(sprite41);
            if (mountain2.x <= -1920) {
                sfSprite_setPosition(sprite41, (sfVector2f) {1920, 0});
            }
            mountain3 = sfSprite_getPosition(sprite7);
            if (mountain3.x <= -1920) {
                sfSprite_setPosition(sprite7, (sfVector2f) {1920, 0});
            }
            mountain4 = sfSprite_getPosition(sprite71);
            if (mountain4.x <= -1920) {
                sfSprite_setPosition(sprite71, (sfVector2f) {1920, 0});
            }
            mountain5 = sfSprite_getPosition(sprite9);
            if (mountain5.x <= -1920) {
                sfSprite_setPosition(sprite9, (sfVector2f) {1920, 0});
            }
            mountain6 = sfSprite_getPosition(sprite91);
            if (mountain6.x <= -1920) {
                sfSprite_setPosition(sprite91, (sfVector2f) {1920, 0});
            }
            clouds7 = sfSprite_getPosition(sprite10);
            if (clouds7.x <= -1920) {
                sfSprite_setPosition(sprite10, (sfVector2f) {1920, 0});
            }
            clouds8 = sfSprite_getPosition(sprite11);
            if (clouds8.x <= -1920) {
                sfSprite_setPosition(sprite11, (sfVector2f) {1920, 0});
            }
            clouds9 = sfSprite_getPosition(sprite12);
            if (clouds9.x <= -1920) {
                sfSprite_setPosition(sprite12, (sfVector2f) {1920, 0});
            }
            clouds10 = sfSprite_getPosition(sprite13);
            if (clouds10.x <= -1920) {
                sfSprite_setPosition(sprite13, (sfVector2f) {1920, 0});
            }
            ground11 = sfSprite_getPosition(sprite14);
            if (ground11.x <= -1920) {
                sfSprite_setPosition(sprite14, (sfVector2f) {1920, 800});
            }
            ground12 = sfSprite_getPosition(sprite15);
            if (ground12.x <= -1920) {
                sfSprite_setPosition(sprite15, (sfVector2f) {1920, 800});
            }
        }
        if (sprite5 != NULL)
            sfRenderWindow_drawSprite(window, sprite5, NULL);
        if (event.type == sfEvtMouseButtonPressed) {
            sfRenderWindow_clear(window, sfWhite);
        }
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite4);
    sfSprite_destroy(sprite41);
    sfSprite_destroy(sprite9);
    sfSprite_destroy(sprite91);
    sfTexture_destroy(texture4);
    sfTexture_destroy(texture41);
    sfTexture_destroy(texture7);
    sfTexture_destroy(texture71);
    sfTexture_destroy(texture9);
    sfTexture_destroy(texture91);
    sfTexture_destroy(texture10);
    sfTexture_destroy(texture11);
    sfTexture_destroy(texture12);
    sfTexture_destroy(texture13);
    sfRenderWindow_destroy(window);
    sfClock_destroy(clock);
    return (0);
}
