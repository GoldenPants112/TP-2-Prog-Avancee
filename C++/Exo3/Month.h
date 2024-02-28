#pragma once
#include "day.h"
#include <iostream>

class Month{
private:
    int month_number;
    Day days;


public:
    Month();

    //retourne le nombre de jour du mois
    int get_max_day (int _month_number);

    //affiche le nom du mois ainsi que les nom des jours de la semaine
    void display_month(int _month_number);

    //affiches les jours de la semaine
    int display_days_in_month(int _decalage_de_caractere, int _jour_max);
};