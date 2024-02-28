#pragma once
#include "day.h"
#include <iostream>

class Month{
private:
    int month_number;
    Day days;


public:
    Month();


    int display_month(int _month_number);
};