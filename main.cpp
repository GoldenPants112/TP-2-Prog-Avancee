#include <iostream>
#include "frome.h"
#include "FullDuration.h"
#include "SecDuration.h"


//void testexo1(){
//        Forme persone1(60,87,150);
//        Forme noboby;
//
//        int r =persone1.compute();
//        Forme::displayResult(r);
//        persone1.setf(70,90,140);
//        Forme::displayResult(persone1.compute());
//
//};

void testexo2(){

    FullDuration time1(1,2,3,4);
    std::cout << time1.affichejour() << std::endl ;
}

int main() {

    testexo2();

    return 0;

}
