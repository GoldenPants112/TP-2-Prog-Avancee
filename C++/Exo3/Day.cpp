#include "Day.h"

Day::Day(int _day_position) {
    day_position = _day_position;
}

Day::Day() {
    day_position =0;
}

int Day::get_day_position() const {
    return day_position;
}

void Day::set_day_position(int _new_day_position) {
    day_position= _new_day_position;
}
