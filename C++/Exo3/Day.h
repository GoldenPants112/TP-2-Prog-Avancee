#pragma once

class Day{
private:
    int day_position;


public:
    //constructeur et constructeur par defaut
    Day(int _day_position);
    Day();

    int get_day_position() const ;
    void set_day_position(int _new_day_position);
};