#include "SecDuration.h"


SecDuration::SecDuration(int seconde_duration){
    second = seconde_duration;
}

SecDuration::SecDuration() {
    second=0;
}

FullDuration SecDuration::convert_FullDuration() {
    int j = second/86400;
    int h = (second-j*86400)/3600;
    int m = (second-(j*86400 + h*3600))/60;
    int s = (second-(j*86400 + h*3600 + m*60));
    FullDuration timeconvert (j,h,m,s);
    return timeconvert;
}

int SecDuration::affiche() {
    return second;
}

SecDuration::SecDuration(int _jour, int _heure, int _minute, int _second) {
second += _jour * 86400;
second += _heure *3600;
second += _minute *60;
second += _second;
}
