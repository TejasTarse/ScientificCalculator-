#include<iostream>
#include<conio.h>
#include <windows.h>
#include"sciCalcFun.cpp"
using namespace std;

int main(){
    int choice=1;
    system("cls");
    do{
        cout<<"\n1. Addition\t2. Subtraction\t3. Multiplication\t4. Division\t";
        cout<<"5. Square root\t6. X ^ Y\t7. X ^ 2\t8. X ^ 3\n\n";
        cout<<"9. 1 / X\t10. X ^ (1 / Y)\t 11. X ^ (1 / 3)\t";
        cout<<"12. 10 ^ X\t13. X!\t14. %\t15. log10(x)\t16. Modulus\n\n";
        cout<<"17. Sin(X)\t18. Cos(X)\t19. Tan(X)\t20. Cosec(X)\t";
        cout<<"21. Cot(X)\t22. Sec(X)\t23.Exit\n"<<endl;
        cout<<"Choice: ";
        cin>>choice;
        
        sciCalc(choice);
        while(1){
        if(kbhit()){
            break;
        }
    }

    }while(choice!=23);

    return 0;
}