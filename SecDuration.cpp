#include "SecDuration.h"
#include "FullDuration.h"
SecDuration::SecDuration(int seconde_duration){
    second = seconde_duration;
}

SecDuration::SecDuration() {
    second=0;
}

FullDuration SecDuration::convert_FullDuration() {
    int j = second%86400;
    int h = (second-j*86400)%3600;
    int m = (second-
}
