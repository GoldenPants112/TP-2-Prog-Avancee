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

    int affichejour();
    int afficheheure();
    int afficheminute();
    int afficheseconde();

};