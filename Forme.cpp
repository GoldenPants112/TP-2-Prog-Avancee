#include "frome.h"
#include <iostream>

Forme::Forme(int _f0,int _f1, int _f2){
f0=_f0;
f1=_f1;
f2=_f2;
};

Forme::Forme(){
    };

int Forme::compute() {
    return (0.1*(f0+f1+f2-200));
}

void Forme::displayResult(int _result) {
    if(_result<=0) std::cout<< _result <<".Donc votre condition physique est exellente" <<std::endl;
    else if(_result<5) std::cout<< _result <<".Donc votre condition physique est tres bonne" <<std::endl;
    else if(_result<10) std::cout<< _result <<".Donc votre condition physique est bonne" <<std::endl;
    else if(_result<15) std::cout<< _result <<".Donc votre condition physique est moyenne" <<std::endl;
    else std::cout<< _result <<".Donc votre condition physique est faible" <<std::endl;
}

void Forme::setf(int newf0, int newf1, int newf2) {
f0= newf0;
f1 = newf1;
f2 = newf2;
}
