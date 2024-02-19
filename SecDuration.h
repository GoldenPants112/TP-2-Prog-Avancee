#pragma once
#include "FullDuration.h"

class SecDuration{
protected :
    int second =0 ;
public:
    //constructeur
    explicit SecDuration(int seconde_duration);

    //constructeur par default
    SecDuration();


    //contructeur avec des jours heure minutes secondes
    SecDuration(int _jour, int _heure,int _minute, int _second );

    //Methode qui converti et renvoie une FullDuration
    FullDuration convert_FullDuration();

    int affiche();

    //incrementation
    void incrementation(int _increment);
    void incrementation();
};
