#pragma once
class FullDuration{
protected:
    int jour;
    int heure;
    int minute;
    int second;
public:
    //constructeur
    FullDuration(int _jour, int _heure,int _minute, int _second);

    //contructeur par defaut
    FullDuration();

    //constructeur avec uniquement des secondes
    FullDuration(int _second);

    //convertir en seconde
    int convert_SecDuration();

    //renvoi les secondes, minutes,heures et jours
    int affichejour();
    int afficheheure();
    int afficheminute();
    int afficheseconde();

    //incremente les secondes, minutes,heures et jours

    void incrementation_seconde(int _increment);
    void incrementation_seconde();

    void incrementation_minute(int _increment);
    void incrementation_minute();

    void incrementation_heure(int _increment);
    void incrementation_heure();

    void incrementation_jour(int _increment);
    void incrementation_jour();

    //fonciton qui permet d'eviter les seocndes >60, minutes >60 et les heures >24. et corrige la duree en foinction;
    void normalise();


    //ajout des duree Secondes et FullDuration

    //
    //Pas de classe SecDuration mais des int => dans le main on met var.affiche(), avec var de classe 'SecDuration'.
    //

    void add_second(int _second);

    void add_FullDuration (FullDuration duree);


    //surchage de l'opperateur + pour additionner des variables de type FullDuartion
    friend  FullDuration operator+ (FullDuration duree1 , FullDuration duree2);

};