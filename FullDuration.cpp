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

int FullDuration::convert_SecDuration(){
int result=0;
result+= second + 60*minute + 3600*heure + 3600*24*jour;
    return result;
}

int FullDuration::affichejour(){
    return jour;
}

int FullDuration::afficheheure() {
    return heure;
}

int FullDuration::afficheminute() {
    return minute;
}

int FullDuration::afficheseconde() {
    return second;
}

FullDuration::FullDuration(int _second) {
     jour = _second/86400;
     heure = (_second-jour*86400)/3600;
     minute = (_second-(jour*86400 + heure*3600))/60;
     second = (_second-(jour*86400 + heure*3600 + minute*60));
}
