#include <iostream>
#include "forme.cpp"
#include "FullDuration.cpp"
#include "SecDuration.cpp"
void testexo1(){
        Forme persone1(60,87,150);
        Forme noboby;

        int r =persone1.compute();
        Forme::displayResult(r);
        persone1.setf(70,90,140);
        Forme::displayResult(persone1.compute());

};

void testexo2(){
    FullDuration timesec1(6,2,5,30);
    int s = timesec1.convert_SecDuration();
    std::cout << s << std::endl ;
}

int main() {

testexo2();

    return 0;

}
