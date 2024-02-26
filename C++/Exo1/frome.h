#pragma once

class Forme{
protected:
    int f0;
    int f1;
    int f2;
public:
    //constructeur
    Forme(int _f0,int _f1, int _f2);

    //consturcteur par default
    Forme();

    //calcule le coef en foncrion de f0,f1,f2
    int compute();
    static void displayResult(int _result);

    //setter afin de changer f0,f1,f2
    void setf(int newf0, int newf1, int newf2);
};