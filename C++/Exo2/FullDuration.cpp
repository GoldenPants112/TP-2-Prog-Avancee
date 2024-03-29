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

void FullDuration::incrementation_seconde(int _increment) {
    second+= _increment;
}

void FullDuration::incrementation_seconde() {
    second +=1;
}

void FullDuration::incrementation_minute(int _increment) {
    minute += _increment;
}

void FullDuration::incrementation_minute() {
    minute+=1;
}

void FullDuration::incrementation_heure(int _increment) {
    heure += _increment;
}

void FullDuration::incrementation_heure() {
    heure += 1;
}

void FullDuration::incrementation_jour(int _increment) {
    jour += _increment;
}

void FullDuration::incrementation_jour() {
    jour +=1;
}

void FullDuration::add_FullDuration(FullDuration duree) {
    jour += duree.jour;
    heure += duree.heure;
    minute += duree.minute;
    second += duree.second;
}

void FullDuration::add_second(int _second) {
    jour += _second/86400;
    heure += (_second-jour*86400)/3600;
    minute += (_second-(jour*86400 + heure*3600))/60;
    second += (_second-(jour*86400 + heure*3600 + minute*60));
}

FullDuration operator+(FullDuration duree1, FullDuration duree2) {
    FullDuration somme_duree;
    somme_duree.jour= duree1.jour + duree2.jour ;
    somme_duree.heure=duree1.heure + duree2.heure;
    somme_duree.minute=duree1.minute + duree2.minute;
    somme_duree.second=duree1.second + duree2.second;
    return somme_duree;
}





void FullDuration::normalise() {
    while (second >= 60) {
        second -= 60;
        minute++;
    }
    while (minute >= 60) {
        minute -= 60;
        heure++;
    }
    while (heure >= 24) {
        heure -= 24;
        jour++;
    }
}
