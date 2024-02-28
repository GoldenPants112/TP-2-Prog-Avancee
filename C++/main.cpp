#include <iostream>
#include "Exo1/frome.h"
#include "Exo2/FullDuration.h"
#include "Exo2/SecDuration.h"
#include "Exo3/Calendar.h"


void testexo1(){
        Forme persone1(60,87,150);
        Forme noboby;

        int r =persone1.compute();
        Forme::displayResult(r);
        persone1.setf(70,90,140);
        Forme::displayResult(persone1.compute());

};

void testexo2(){
//
//    SecDuration time1(834567);
//    FullDuration time1cov( time1.convert_FullDuration());
//    std::cout << time1cov.affichejour() << std::endl ;
//    std::cout << time1cov.afficheheure() << std::endl ;
//    std::cout << time1cov.afficheminute() << std::endl ;
//    std::cout << time1cov.afficheseconde() << std::endl ;
//
//    SecDuration temps1(1,1,1,1);
//   temps1.incrementation(16);
//    FullDuration duree_ajoute(1, 2, 50, 54);
//    temps1.add_FullDuration(duree_ajoute);
//
//
//    SecDuration duree_en_sec(237895);
//    temps1.add_SecDuration(duree_en_sec);
//    std::cout << temps1.affiche() << " seconde(s)"<< std::endl;








    std::cout << "__________________________________________" <<std::endl;

    FullDuration temps2 (0,0,45,5);

//    temps2.incrementation_jour(2);
//    temps2.incrementation_heure(2);
//    temps2.incrementation_minute(2);
//    temps2.incrementation_seconde(2);
//
//    temps2.incrementation_jour();
//    temps2.incrementation_heure();
//    temps2.incrementation_minute();
//    temps2.incrementation_seconde();

//    FullDuration duree_ajoute(1,2,3,4);
    FullDuration durre_ajoutee (1,2,10,15);
    FullDuration  dureeinitialle(0,0,55,55);
    FullDuration somme_duree = dureeinitialle + durre_ajoutee;
    somme_duree.normalise();

   std::cout << somme_duree.affichejour() << " jour(s)." << std::endl;
   std::cout << somme_duree.afficheheure() << " heure(s)." << std::endl;
   std::cout << somme_duree.afficheminute() << " minute(s)." << std::endl;
   std::cout << somme_duree.afficheseconde() << " seconde(s)." << std::endl;
}



void testexo3(){
   Calendar calendrier;
   calendrier.display(2000);
}





int main() {

    testexo3();

    return 0;

}
