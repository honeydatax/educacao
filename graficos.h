#include "pt.h"
#include <cairo.h>
#include <gtk/gtk.h>

#define formato printf
#define funcao gboolean
#define falso FALSE
#define verdadeiro TRUE
#define primida keyval
#define eventos GdkEventKey
#define pontos gpointer
#define mecanismo GtkWidget
#define desenho cairo_t
#define rectangulo cairo_rectangle
#define lapis cairo_set_source_rgb
#define preechimento cairo_fill
#define redesenhar gtk_widget_queue_draw_area
#define fim gtk_main_quit
#define preservar cairo_stroke_preserve
#define retornar return
#define erato GdkEventButton
rotina (*saindo) ();
funcao (*desenhando) (mecanismo *,desenho *,pontos);
funcao (*orelogio) (pontos);
funcao (*otecla) (mecanismo *,eventos *, pontos);
funcao (*orato) (mecanismo *,erato *, pontos);

rotina iniciar();


//g++ -o out gimage.cpp  `pkg-config gtk+-3.0 --cflags --libs`
GtkWidget *window;
GtkWidget *esquema;
GtkWidget *widgets;
GtkStyleContext *context;
guint gu1=100;
gint exitcode=0;
int largura=640;
int altura=320;
texto titulo[]="titulo";
texto *titulos=titulo;
desenho *desenho1;

rotina iniciar()
{
    inteiro argc=0;
    char ***argv=NULL;

	gtk_init (&argc,argv);
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_widget_set_size_request (GTK_WIDGET (window), 620, 320);
    gtk_window_set_title (GTK_WINDOW (window), titulos);
    g_signal_connect (window, "destroy",
                      G_CALLBACK (saindo), NULL);



    esquema = gtk_drawing_area_new ();
	gtk_container_add (GTK_CONTAINER(window), esquema);
    gtk_widget_show (esquema);
    gtk_widget_add_events(window,GDK_KEY_PRESS_MASK);
    gtk_widget_set_size_request (GTK_WIDGET (window), largura,altura);
    gtk_widget_show_all(window);

    g_signal_connect (G_OBJECT(esquema), "draw",
                     G_CALLBACK (desenhando), NULL);

    g_signal_connect (window, "key_press_event",
                      G_CALLBACK (otecla), NULL);


    g_signal_connect (window, "button-press-event",
                     G_CALLBACK (orato), NULL);

    exitcode=g_timeout_add(gu1,orelogio,NULL);


    gtk_main();

    g_source_remove(exitcode);

}


