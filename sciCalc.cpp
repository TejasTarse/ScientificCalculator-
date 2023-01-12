#include<iostream>
#include<math.h>
using namespace std;

int main(){
int choice=1, i, a, b;
float x, y, result;
do{
cout<<"\n1. Addition\t2. Subtraction\t3. Multiplication\t4. Division\t";
cout<<"5. Square root\t6. X ^ Y\t7. X ^ 2\t8. X ^ 3\n\n";
cout<<"9. 1 / X\t10. X ^ (1 / Y)\t 11. X ^ (1 / 3)\t";
cout<<"12. 10 ^ X\t13. X!\t14. %\t15. log10(x)\t16. Modulus\n\n";
cout<<"17. Sin(X)\t18. Cos(X)\t19. Tan(X)\t20. Cosec(X)\t";
cout<<"21. Cot(X)\t22. Sec(X)\t23.Exit\n"<<endl;
cout<<"Choice: ";
cin>>choice;
switch(choice) {
case 1:
cout<<"Enter X: ";
cin>>x;
cout<<"\nEnter Y: ";
cin>>y;
result = x + y;
cout<<"\nResult:"<< result<<endl;
break;
case 2:
cout<<"Enter X: ";
cin>>x;
cout<<"\nEnter Y: ";
cin>>y;
result = x - y;
cout<<"\nResult:"<< result<<endl;
break;
case 3:
cout<<"Enter X: ";
cin>>x;
cout<<"\nEnter Y: ";
cin>>y;
result = x * y;
cout<<"\nResult:"<< result<<endl;
break;
case 4:
cout<<"Enter X: ";
cin>>x;
cout<<"\nEnter Y: ";
cin>>y;
result = x / y;
cout<<"\nResult:"<< result<<endl;
break;
case 5:
cout<<"Enter X: ";
cin>>x;
result = sqrt(x);
cout<<"\nResult:"<< result<<endl;
break;
case 6:
cout<<"Enter X: ";
cin>>x;
cout<<"\nEnter Y: ";
cin>>y;
result = pow(x, y);
cout<<"\nResult:"<< result<<endl;
break;
case 7:
cout<<"Enter X: ";
cin>>x;
result = pow(x, 2);
cout<<"\nResult:"<< result<<endl;
break;
case 8:
cout<<"Enter X: ";
cin>>x;
result = pow(x, 3);
cout<<"\nResult:"<< result<<endl;
break;
case 9:
cout<<"Enter X: ";
cin>>x;
result = pow(x, -1);
cout<<"\nResult:"<< result<<endl;
break;
case 10:
cout<<"Enter X: ";
cin>>x;
cout<<"\nEnter Y: ";
cin>>y;
result = pow(x, (1/y));
cout<<"\nResult:"<< result<<endl;
break;
case 11:
cout<<"Enter X: ";
cin>>x;
y = 3;
result = pow(x, (1/y));
cout<<"\nResult:"<< result<<endl;
break;
case 12:
cout<<"Enter X: ";
cin>>x;
result = pow(10,x);
cout<<"\nResult:"<< result<<endl;
break;
case 13:
cout<<"Enter X: ";
cin>>x;
result = 1;
for(i = 1; i <= x; i++) {
result = result * i;
}
cout<<"\nResult:"<< result<<endl;
break;
case 14:
cout<<"Enter Obtain value: ";
cin>>x;
cout<<"\nEnter Total value: ";
cin>>y;
result = (x / y) * 100;
cout<<"\nResult: "<< result<<endl;
break;
case 15:
cout<<"Enter X: ";
cin>>x;
result = log10(x);
cout<<"\nResult: "<< result<<endl;
break;
case 16:
cout<<"Enter X: ";
cin>>a;
cout<<"\nEnter Y: ";
cin>>b;
result = a % b;
cout<<"\nResult:"<< result<<endl;
break;
case 17:
cout<<"Enter X: ";
cin>>x;
result = sin(x * 3.14159 / 180);
cout<<"\nResult: "<< result<<endl;
break;
case 18:
cout<<"Enter X: ";
cin>>x;
result = cos(x * 3.14159 / 180);
cout<<"\nResult: "<< result<<endl;
break;
case 19:
cout<<"Enter X: ";
cin>>x;
result = tan(x * 3.14159 / 180);
cout<<"\nResult: "<< result<<endl;
break;
case 20:
cout<<"Enter X: ";
cin>>x;
result = 1 / (sin(x * 3.14159 / 180));
cout<<"\nResult: "<< result<<endl;
break;
case 21:
cout<<"Enter X: ";
cin>>x;
result = 1 / tan(x * 3.14159 / 180);
cout<<"\nResult: "<< result<<endl;
break;
case 22:
cout<<"Enter X: ";
cin>>x;
result = 1 / cos(x * 3.14159 / 180);
cout<<"\nResult: "<< result<<endl;
break;
case 23:
cout<<"\nExit";
break;
default:
cout<<"\nInvalid Choice!";
}
}while(choice!=23); 

return 0;
}