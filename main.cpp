#include <iostream>
#include "forme.cpp"

void testexo1(){
        Forme persone1(60,87,150);
        Forme noboby;

        int r =persone1.compute();
        Forme::displayResult(r);
        persone1.setf(70,90,140);
        Forme::displayResult(persone1.compute());

};

void testexo2(){

}
int main() {

testexo1();

    return 0;

}
