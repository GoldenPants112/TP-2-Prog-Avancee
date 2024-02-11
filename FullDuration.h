#pragma once
class FullDuration{
protected:
    int jour;
    int heure;
    int minute;
    int second;
public:
    FullDuration(int _jour, int _heure,int _minute, int _second);
    FullDuration();

    //convertir en seconde
    int convert_SecDuration();

    int affichejour();
    int afficheheure();
    int afficheminute();
    int afficheseconde();

};