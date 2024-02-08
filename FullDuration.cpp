#include "FullDuration.h"

FullDuration::FullDuration(int _jour, int _heure, int _minute, int _second) {
    jour=_jour;
    heure=_heure;
    minute= _minute;
    second = _second;
}

FullDuration::FullDuration(){
    jour=0;
    heure=0;
    minute= 0;
    second = 0;
}