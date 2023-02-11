#include<bits/stdc++.h>
using namespace std;
#include"calculatorAllFunction.cpp"
void sciCalc(int &choice){
    switch(choice) {
        case 1:
        add();
        break;
        case 2:
            sub();
        break;
        case 3:
        multi();
        break;
        case 4:
            divide();
        break;
        case 5:
            squareroot();
        break;
        case 6:
            power();
        break;
        case 7:
            square();
        break;
        case 8:
            cube();
        break;
        case 9:
            inverse();
        break;
        case 10:
            indexAsInverse();
        break;
        case 11:
            inverseCube();
        break;
        case 12:
            powerOf10();
        break;
        case 13:
            fact();
        break;
        case 14:
            percentage();
        break;
        case 15:
            logToTHeBase10();
        break;
        case 16:
            modulos();
        break;
        case 17:
            Sin();
        break;
        case 18:
            Cos();
        break;
        case 19:
            Tan();
        break;
        case 20:
            Cosec();
        break;
        case 21:
            Cot();
        break;
        case 22:
            Sec();
        break;
        case 23:
            cout<<"\nExit";
        break;
        default:
            cout<<"\nInvalid Choice!";
    }
}