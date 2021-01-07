#include <gtk/gtk.h>


void
on_ok_clicked                          (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_supression_clicked                  (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_affichage_clicked                   (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_modification_clicked                (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_ajouter_clicked                     (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_retour_clicked                      (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_appliquer_les_modification_clicked  (GtkWidget       *Widget,
                                        gpointer         user_data);

void
on_suprimer_ouv_clicked                (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_button5_ajouter_clicked             (GtkWidget       *widget,
                                        gpointer         user_data);

void
on_affi_abs_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button5_mail_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_button4_fb_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_radiobutton2_Mjr_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_radiobutton1_M_nuit_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton2_B_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_checkbutton1_A_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button6_ok_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data);

void
on_button2_de_clicked                  (GtkWidget       *button,
                                        gpointer         user_data);

void
on_button5_supp_tree_clicked           (GtkButton       *button,
                                        gpointer         user_data);

void
on_button3_retour_M_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_button4_supp_clicked                (GtkButton       *button,
                                        gpointer         user_data);

void
on_button1_retour_Aj_clicked           (GtkButton       *button,
                                        gpointer         user_data);
