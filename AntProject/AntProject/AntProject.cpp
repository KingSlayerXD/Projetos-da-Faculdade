// AntProject.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "allegro5\allegro.h"
#include "allegro5\allegro_image.h"	
#include "allegro5\allegro_font.h"
#include "allegro5\allegro_ttf.h"

int main()
{

	
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_DISPLAY * display = al_create_display(640, 480);
	ALLEGRO_FONT * font = al_load_ttf_font("ANTFONT.ttf", 42, 0);

	while(true){
		al_clear_to_color(al_map_rgb(255, 255, 255));
  		al_draw_text(font, al_map_rgb(0, 0, 0), 0, 0, 0, "Hello my name is OK Google");
		al_flip_display();
	}
	al_destroy_display(display);
	al_destroy_font(font);

	return 0;
}
