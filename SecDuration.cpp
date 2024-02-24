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

void SecDuration::incrementation() {
    second += 1;
}

void SecDuration::incrementation(int _increment) {
    second +=_increment;
}

void SecDuration::add_SecDuration(SecDuration duree) {
    second += duree.affiche();
}

void SecDuration::add_FullDuration(FullDuration duree) {
    second += (duree.affichejour() * 86400);
    second += (duree.afficheheure() *3600);
    second += (duree.afficheminute() * 60);
    second += duree.afficheseconde();
}




//A continuer vv


//SecDuration operator+(SecDuration duree1, FullDuration duree2) {
//    //converti la variable FullDuration en SecDuration
//    SecDuration duree2_conv (duree2.affichejour(),duree2.afficheheure(),duree2.afficheminute(),duree2.afficheseconde());
//    SecDuration somme_duree (duree1.affiche() + duree2_conv.affiche());
//    return somme_duree;
//}