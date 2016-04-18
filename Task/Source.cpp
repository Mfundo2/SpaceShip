

#include<allegro5\allegro.h>
#include<allegro5\allegro_native_dialog.h>
#include<allegro5\allegro_font.h>
#include<allegro5\allegro_ttf.h>
int main(void)
{
	ALLEGRO_DISPLAY *display = NULL;
	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "failed to initialise allegro!", NULL, NULL);
		return -1;
	}
	if (!display)
	{
		{
			al_show_native_message_box(NULL, NULL, NULL, "failed to initialise display!", NULL, NULL);
			return -1;
		}
	}
	al_init_font_addon();
	al_init_ttf_addon();
	ALLEGRO_FONT*font26 = al_load_font("arial.ttf", 24, 0);
	ALLEGRO_FONT*font18 = al_load_font("arial.ttf", 18, 0);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_text(font26, al_map_rgb(255, 0, 255), 50, 50, 0, "Mfundo Mbambo");
	al_flip_display();
	al_rest(12.0);
	al_destroy_display(display);
	return 0;
	;
}

