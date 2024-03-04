#include "Calendar.h"


Calendar::Calendar(){
}

void Calendar::display(int _year) {
    Month mois;
    //premier janvier est defini par le decalge de caractere (0-dim /1-lun )
    int premier_janvier=3;
    int decalage_premier_du_mois;
    //faire le code ci-dessous pour les 12 mois, et les afficher
    for (int i=1; i<13;i++){

        int jour_max = mois.get_max_day(i);
        mois.display_month(i);

        if (i ==1 ){
            decalage_premier_du_mois=mois.display_days_in_month(premier_janvier,jour_max);
        }
        else{
        decalage_premier_du_mois =  mois.display_days_in_month(decalage_premier_du_mois, jour_max);
        }

        std::cout<<"\n";
    }
}
