#include "window.h"


void Destroy(GtkWidget *widget, gpointer data){
	gtk_main_quit();
}


GtkWidget* LaunchWindow(){
	GtkWidget *MainWindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);

	gtk_window_set_title(GTK_WINDOW(MainWindow), "Motion Film Lab");
	
	gtk_window_maximize(GTK_WINDOW(MainWindow));

	g_signal_connect(G_OBJECT(MainWindow), "destroy", G_CALLBACK(Destroy), NULL);

	gtk_widget_show_all(MainWindow);
	
	gtk_main();

	return MainWindow;
}
