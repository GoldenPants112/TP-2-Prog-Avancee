#include "Calendar.h"


Calendar::Calendar(){
}

void Calendar::display(int _year) {
    Month mois;
    //faire le code ci-dessous pour les 12 mois, et les afficher
    for (int i=1; i<13;i++){
        int jour_max = mois.display_month(i);

        //afficher les jours du mois
        for (int j = 1; j <= jour_max; j++) {
            int current_position;
            //affiche les jours du mois avec le bon format (espace et saut a la ligne)
            if (j%7 == 0 && j>=10){
                std::cout<< j <<"\n";
                current_position =0;
            }
            else if (j%7 == 0 && j<10){
                std::cout<< " "<<j <<"\n";
                current_position =0;
            }
            else if(j<10){
                std::cout << " "<< j << " ";
            }
            else if (j>=10){
                std::cout << j << " ";
            }
        }
        std::cout<<"\n";
    }
}
