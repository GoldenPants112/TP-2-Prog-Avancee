#pragma once

class Forme{
    protected:
    int f0;
    int f1;
    int f2;
public:
    Forme(int _f0,int _f1, int _f2);
    int compute();
    static void displayResult(int _result);
};