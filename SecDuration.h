#pragma once
#include "FullDuration.h"

class SecDuration{
protected :
    int second;
public:
    //constructeur
    explicit SecDuration(int seconde_duration);

    //constructeur par default
    SecDuration();

  FullDuration convert_FullDuration();

  int affiche();
};
