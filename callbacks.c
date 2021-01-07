#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "ouvrier.h"
#include "affichage.h"
#include"abs.h"
void
on_ok_clicked                          (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget* ouvrier1,*lb,*gestionouvrier5,*CIN10,*CODE10,*gestion_ouvrier;
char CIN1[20];
char CODE1[20];
ouvrier T ;
int x=-1;
CIN10 = lookup_widget (button,"entry3");
CODE10 = lookup_widget (button,"entry4");
lb = lookup_widget (button,"label34");
strcpy(CIN1, gtk_entry_get_text(GTK_ENTRY(CIN10)));
strcpy(CODE1, gtk_entry_get_text(GTK_ENTRY(CODE10)));
FILE *f=NULL;

f=fopen("ouvrier.txt","r");
if(f!=NULL)
{
 while(fscanf(f,"%s %s %s %s %s %s %s\n",T.nom,T.prenom,T.CIN,T.CODE,T.date_naissance,T.sex,T.travail_parmois)!=EOF)
{
if((strcmp(T.CIN,CIN1)==0)&&(strcmp(T.CODE,CODE1)==0))
{
x=1;

}

}
fclose(f);
}
if(x!=1)
{
gtk_label_set_text(GTK_LABEL(lb),"compte n'existe pas ");
}else
{

ouvrier1=lookup_widget(button,"ouvrier1");
gtk_widget_destroy(ouvrier1);
gestion_ouvrier = create_gestionouvrier ();
gtk_widget_show (gestion_ouvrier);
    
}

}







//////////////////////////////////////////////////////////////////////
void
on_supression_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget* gestionouv,*supprimer;
supprimer=create_supprimer ();
gtk_widget_show(supprimer);

gestionouv=lookup_widget(button,"gestionouvrier");
gtk_widget_destroy(gestionouv);

}


void
on_affichage_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget* gestionouv,*affichage;
GtkWidget*treeview1;

affichage=create_affichage ();
gtk_widget_show(affichage);

treeview1 = lookup_widget (affichage,"treeview1");
afficher_employer(treeview1);

gestionouv=lookup_widget(button,"gestionouvrier");
gtk_widget_destroy(gestionouv);

}


void
on_modification_clicked                (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget* gestionouv,*modification;
modification=create_modification ();
gtk_widget_show(modification);

gestionouv=lookup_widget(button,"gestionouvrier");
gtk_widget_destroy(gestionouv);

}


void
on_ajouter_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget* gestionouv,*ajouter;
ajouter=create_ajouter ();
gtk_widget_show(ajouter);

gestionouv=lookup_widget(button,"gestionouvrier");
gtk_widget_destroy(gestionouv);

}


void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_retour_clicked                      (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget* affichage,*gestionouv2;
gestionouv2=create_gestionouvrier ();
gtk_widget_show(gestionouv2);

affichage=lookup_widget(button,"affichage");
gtk_widget_destroy(affichage);

}


void
on_appliquer_les_modification_clicked  (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget* modification,*gestionouv3;
GtkWidget*nom6;
GtkWidget*prenom6;
GtkWidget*CIN6;
GtkWidget *CODE6;
GtkWidget *Ajouter6;
GtkWidget *sex6;
GtkWidget *date_naissance6;
GtkWidget *travail_parmois6;
GtkWidget*ajouter,*gestionouvrier1;
char nom7[20];
char prenom7 [20];
char CIN7[20];
char CODE7[20];
char date_naissance7[20];
char sex7[20];
char travail_parmois7[20];
nom6 = lookup_widget (button,"entry12");
prenom6 = lookup_widget (button,"entry13");
CIN6 = lookup_widget (button,"entry14");
CODE6 = lookup_widget (button,"entry17");
date_naissance6 = lookup_widget (button,"entry16");
sex6 = lookup_widget (button,"entry24");
travail_parmois6 = lookup_widget (button,"entry19");

 
strcpy(nom7, gtk_entry_get_text(GTK_ENTRY(nom6)));
strcpy(prenom7, gtk_entry_get_text(GTK_ENTRY(prenom6)));
strcpy(CIN7, gtk_entry_get_text(GTK_ENTRY(CIN6)));
strcpy(CODE7, gtk_entry_get_text(GTK_ENTRY(CODE6)));
strcpy(date_naissance7, gtk_entry_get_text(GTK_ENTRY(date_naissance6)));
strcpy(sex7, gtk_entry_get_text(GTK_ENTRY(sex6)));
strcpy(travail_parmois7, gtk_entry_get_text(GTK_ENTRY(travail_parmois6)));
modifier_employer(nom7,prenom7,CIN7,CODE7,date_naissance7,sex7,travail_parmois7);

gestionouv3=create_gestionouvrier ();
gtk_widget_show(gestionouv3);

modification=lookup_widget(button,"modification");
gtk_widget_destroy(modification);

}


void
on_suprimer_ouv_clicked                (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget* supprimer,*gestionouv4,*gestionouvrier;
char CINnouv[20];
gestionouv4 = lookup_widget (button,"entry23");
strcpy(CINnouv, gtk_entry_get_text(GTK_ENTRY(gestionouv4)));
supprimer_employer(CINnouv);
gestionouvrier=create_gestionouvrier ();
gtk_widget_show(gestionouvrier);

supprimer=lookup_widget(button,"supprimer");
gtk_widget_destroy(supprimer);

}


void
on_button5_ajouter_clicked             (GtkWidget       *button,
                                        gpointer         user_data)
{
FILE *f=NULL;
GtkWidget*nom;
GtkWidget*prenom;
GtkWidget*CIN;
GtkWidget *CODE;
GtkWidget *Ajouter;
GtkWidget *sex;
GtkWidget *date_naissance;
GtkWidget *travail_parmois;
GtkWidget*ajouter,*gestionouvrier1;
char nom2[20];
char prenom2 [20];
char CIN2[20];
char CODE2[20];
char date_naissance2[20];
char sex2[20];
int travail_parmois2;
nom = lookup_widget (button,"entry5_nom");
prenom = lookup_widget (button,"entry6_prenom");
CIN = lookup_widget (button,"entry7_CIN");
CODE = lookup_widget (button,"entry8_CODE");
date_naissance = lookup_widget (button,"entry9_naissance");

travail_parmois = lookup_widget (button,"spinbutton1");
travail_parmois2=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(travail_parmois));
sex = lookup_widget (button,"combobox1");
strcpy(sex2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(sex)));

 
strcpy(nom2, gtk_entry_get_text(GTK_ENTRY(nom)));
strcpy(prenom2, gtk_entry_get_text(GTK_ENTRY(prenom)));
strcpy(CIN2, gtk_entry_get_text(GTK_ENTRY(CIN)));
strcpy(CODE2, gtk_entry_get_text(GTK_ENTRY(CODE)));
strcpy(date_naissance2, gtk_entry_get_text(GTK_ENTRY(date_naissance)));


f=fopen("ouvrier.txt","a");
if(f!=NULL)
{
fprintf(f," %s %s %s %s %s %s %d \n" ,nom2,prenom2,CIN2,CODE2,date_naissance2,sex2,travail_parmois2);
fclose(f);
gestionouvrier1= create_gestionouvrier();
gtk_widget_show(gestionouvrier1);

ajouter = lookup_widget (button,"ajouter");
gtk_widget_destroy(ajouter);
}
else printf("\n not found");

}


void
on_affi_abs_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *da;
GtkWidget *treeView2;
char s[20];
int annee;
da = lookup_widget (objet,"entry25");
strcpy(s,gtk_entry_get_text(GTK_ENTRY(da)));
annee=atoi(s);
taux_dab(annee);
treeView2=lookup_widget(objet,"treeview2");
affi_abs(treeView2,"Absent.txt");
}


void
on_button5_mail_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
system("firefox https://www.mail.google.com/");
}


void
on_button4_fb_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
system("firefox https://www.facebook.com/");
}


int x;
int t[2]={0,0};
void
on_radiobutton2_Mjr_toggled            (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
 if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
 {x=1;}
}


void
on_radiobutton1_M_nuit_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
 if (gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton))) 
{x=2;} 
}


void
on_checkbutton2_B_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
  if (gtk_toggle_button_get_active(togglebutton)) 
  {t[0]=1;} 
}


void
on_checkbutton1_A_toggled              (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
   if (gtk_toggle_button_get_active(togglebutton)) 

   {t[1]=1;}
}


void
on_button6_ok_clicked                  (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *output;
char ch1[200]=" travaille en ";
char ch2[200]=" ";
char ch3[200]=" ";
if (x==2) 
strcpy(ch2," Mode nuit ");
 else  
strcpy(ch2," Mode jour ");
 if (t[0]==1)
 strcat(ch3," Groupe B "); 
if(t[1]==1)
 strcat (ch3,"  Groupe A");
strcat(ch3,ch1);
strcat(ch3,ch2);
output = lookup_widget(objet, "label36");

gtk_label_set_text(GTK_LABEL(output),ch3);


}


void
on_button2_de_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *ouvrier1,*gestion_ouvrier;
gestion_ouvrier = lookup_widget(button,"gestion_ouvrier");
gtk_widget_destroy (gestion_ouvrier);
ouvrier1=create_ouvrier1 ();
gtk_widget_show(ouvrier1);

}


void
on_button5_supp_tree_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
{
GtkTreeModel     *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget* p=lookup_widget(button,"treeview1");
        gchar *nom;
	gchar *prenom;

        gchar *CIN;//gchar* type gtk ==> chaine en c car la fonction gtk_tree_model_get naccepte que gchar*
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))//test sur la ligne selectionnée
        {  gtk_tree_model_get (model,&iter,0,&nom,1,&prenom,2,&CIN,-1);
           gtk_list_store_remove(GTK_LIST_STORE(model),&iter);//supprimer la ligne du treeView

            supprimer_employer( CIN);// supprimer la ligne du fichier
}
}
}


void
on_button3_retour_M_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* gestionouv,*modification;
modification = lookup_widget (button,"modification");
gtk_widget_destroy(modification);

gestionouv = create_gestionouvrier ();
gtk_widget_show(gestionouv);
}


void
on_button4_supp_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* gestionouv,*supprimer;
supprimer = lookup_widget (button,"supprimer");
gtk_widget_destroy(supprimer);

gestionouv = create_gestionouvrier ();
gtk_widget_show(gestionouv);
}


void
on_button1_retour_Aj_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget* gestionouv,*ajouter;
ajouter = lookup_widget (button,"ajouter");
gtk_widget_destroy(ajouter);

gestionouv = create_gestionouvrier ();
gtk_widget_show(gestionouv);
}

