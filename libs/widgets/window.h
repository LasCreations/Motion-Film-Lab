
#ifndef WINDOW_H
#define WINDOW_H

#include <stdio.h>
#include <stdbool.h>

#include <gtk/gtk.h>

typedef struct MenuBar{
	GtkWidget *MenuBarBox; 	
	
	GtkWidget *MenuBar;  	
	
	GtkWidget *FileMenu;   
	GtkWidget *EditMenu; 
	GtkWidget *ClipMenu; 
	GtkWidget *SequenceMenu;
	GtkWidget *GraphicsMenu;   
	GtkWidget *ViewMenu;   
	GtkWidget *WindowMenu;  
	GtkWidget *HelpMenu;   

	GtkWidget *FileMi;   
	GtkWidget *EditMi;   
	GtkWidget *ClipMi;   
	GtkWidget *SequenceMi; 
	GtkWidget *GraphicsMi; 
	GtkWidget *ViewMi;  
	GtkWidget *WindowMi;  
	GtkWidget *HelpMi;

	//Under File Tab
	GtkWidget *QuitMi;  
	GtkWidget *ImportMi;
	GtkWidget *ExportMi;
	GtkWidget *SaveMi;
	GtkWidget *SaveAsMi;
	GtkWidget *NewMi;
}MenuBar;


GtkWidget* LaunchWindow();

void Destroy(GtkWidget *widget, gpointer data);

#endif
