#include "Month.h"
Month::Month(int _month_number) {
    month_number = _month_number;
    switch (_month_number) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days.set_day_position(31);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days.set_day_position(30);
            break;
        case 2:
            days.set_day_position(28);
            break;
    }
}

int Month::display_days() {
    return days.get_day_position();
}
