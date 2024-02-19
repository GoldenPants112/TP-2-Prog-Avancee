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
//
//    SecDuration time1(834567);
//    FullDuration time1cov( time1.convert_FullDuration());
//    std::cout << time1cov.affichejour() << std::endl ;
//    std::cout << time1cov.afficheheure() << std::endl ;
//    std::cout << time1cov.afficheminute() << std::endl ;
//    std::cout << time1cov.afficheseconde() << std::endl ;


    SecDuration temps1(1,1,1,1);
    std::cout << temps1.affiche() << std::endl;

    FullDuration temps2 (90061);
    std::cout << temps2.affichejour() << " jour" << std::endl;
    std::cout << temps2.afficheheure() << " heure" << std::endl;
    std::cout << temps2.afficheminute() << " minute" << std::endl;
    std::cout << temps2.afficheseconde() << " seconde" << std::endl;
}



int main() {

    testexo2();

    return 0;

}
