#include "Calendar.h"


Calendar::Calendar(){
}

void Calendar::display(int _year) {
    Month mois;
    int premier_janvier=9;
    //faire le code ci-dessous pour les 12 mois, et les afficher
    for (int i=1; i<13;i++){

        int jour_max = mois.get_max_day(i);
        mois.display_month(i);

       premier_janvier =  mois.display_days_in_month(premier_janvier,jour_max);

        std::cout<<"\n";
    }
}
