#include "Month.h"
Month::Month() {

}

int Month::display_month(int _month_number) {
    month_number = _month_number;
    int jour_max ;
    switch (_month_number) {
        case 1:
            std::cout<< "       Janvier      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 31;
            break;
        case 2:
            std::cout<< "       Fevrier      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 28;
            break;
        case 3:
            std::cout<< "         Mars       " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 31;
            break;
        case 4:
            std::cout<< "        Avril        " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 30;
            break;
        case 5:
            std::cout<< "         Mai        " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 31;
            break;

        case 6:
            std::cout<< "        Juin        " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 30;
            break;

        case 7:
            std::cout<< "       Juillet      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 31;
            break;

        case 8:
            std::cout<< "        Aout        " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 31;
            break;

        case 9:
            std::cout<< "     Septembre      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 30;
            break;

        case 10:
            std::cout<< "       Octobre      " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 31;
            break;

        case 11:
            std::cout<< "       Novembre     " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 30;
            break;

        case 12:
            std::cout<< "       Decembre     " <<std::endl;
            std::cout<< "lu ma me je ve sa di" << std::endl;
            jour_max = 31;
            break;


    }
    return jour_max;
}
