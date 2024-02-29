#include "Month.h"
Month::Month() {

}

void Month::display_month(int _month_number) {
    month_number = _month_number;
    int jour_max ;
    switch (_month_number) {
        case 1:
            std::cout<< "       Janvier      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;
        case 2:
            std::cout<< "       Fevrier      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;
        case 3:
            std::cout<< "         Mars       " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;
        case 4:
            std::cout<< "        Avril        " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;
        case 5:
            std::cout<< "         Mai        " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;

        case 6:
            std::cout<< "        Juin        " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;

        case 7:
            std::cout<< "       Juillet      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;

        case 8:
            std::cout<< "        Aout        " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;

        case 9:
            std::cout<< "     Septembre      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;

        case 10:
            std::cout<< "       Octobre      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;

        case 11:
            std::cout<< "       Novembre     " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;

        case 12:
            std::cout<< "       Decembre     " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            break;
    }
}

int Month::get_max_day(int _month_number) {
    int max_day;
    switch (_month_number) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            max_day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            max_day = 30;
            break;
        case 2:
            max_day = 28;
            break;
    }
    return max_day;
}





int Month::display_days_in_month(int _decalage_de_caractere, int _jour_max) {
    int position = (_decalage_de_caractere/3)+1;

    //afficher les points en fonction du decalage de caracteres
    switch (_decalage_de_caractere) {
        case 3: std::cout<< " . ";
            break;
        case 6: std::cout<< " .  . ";
            break;
        case 9: std::cout<< " .  .  . ";
            break;
        case 12: std::cout<< " .  .  .  . ";
            break;
        case 15: std::cout<< " .  .  .  .  . ";
            break;
        case 18: std::cout<< " .  .  .  .  .  . ";
            break;
    }

    //afficher tous les jours du mois
    for (int j = 1; j <= _jour_max; j++) {

        //affiche les jours du mois avec le bon format (espace et saut a la ligne)
        //saut la ligne apres 7 elements ( . ou jours)
        if (position%7 == 0 && j>=10){
            std::cout<< j <<"\n";
            _decalage_de_caractere =0;
            position=1;
        }
        else if (position%7 == 0 && j<10){
            std::cout<< " "<<j <<"\n";
            _decalage_de_caractere =0;
            position=1;
        }

        //affichage des jours. Different espace si le nombre a 2 chiffres ou 1 seul
        else if(j<10){
            std::cout << " "<< j << " ";
            _decalage_de_caractere+=3;
            position+=1;
        }
        else if (j>=10){
            std::cout << j << " ";
            _decalage_de_caractere+=3;
            position+=1;
        }
    }
    return _decalage_de_caractere;
}
