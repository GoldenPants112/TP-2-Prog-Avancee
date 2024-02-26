#pragma once
#include "day.h"

class Month{
private:
    int month_number;
    Day days;


public:
    Month(int _month_number);


    int display_days();
};