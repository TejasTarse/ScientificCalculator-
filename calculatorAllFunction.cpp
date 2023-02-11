#include <bits/stdc++.h>
using namespace std;

float x,y,result;
int a,b;
// case 1
void add(){
    cout<<"Enter X: ";
    cin>>x;
    cout<<"\nEnter Y: ";
    cin>>y;
    cout<<"\nResult:"<< x + y<<endl;
}
// case 2
void sub(){
    cout<<"Enter X: ";
    cin>>x;
    cout<<"\nEnter Y: ";
    cin>>y;
    cout<<"\nResult:"<< x - y<<endl;
}
// case 3
void multi(){
    cout<<"Enter X: ";
    cin>>x;
    cout<<"\nEnter Y: ";
    cin>>y;
    result = x * y;
    cout<<"\nResult:"<< result<<endl;
}
// case 4
void divide(){
    cout<<"Enter X: ";
    cin>>x;
    cout<<"\nEnter Y: ";
    cin>>y;
    result = x / y;
    cout<<"\nResult:"<< result<<endl;
}
// case 5
void squareroot(){
    cout<<"Enter X: ";
    cin>>x;
    result = sqrt(x);
    cout<<"\nResult:"<< result<<endl;
}
// case 6
void power(){
    cout<<"Enter X: ";
    cin>>x;
    cout<<"\nEnter Y: ";
    cin>>y;
    result = pow(x, y);
    cout<<"\nResult:"<< result<<endl;
}
// case 7
void square(){
    cout<<"Enter X: ";
    cin>>x;
    result = pow(x, 2);
    cout<<"\nResult:"<< result<<endl;
}
// case 8
void cube(){
    cout<<"Enter X: ";
    cin>>x;
    result = pow(x, 3);
    cout<<"\nResult:"<< result<<endl;
}
// case 9
void inverse(){
    cout<<"Enter X: ";
    cin>>x;
    result = pow(x, -1);
    cout<<"\nResult:"<< result<<endl;
}
// case 10
void indexAsInverse(){
    cout<<"Enter X: ";
    cin>>x;
    cout<<"\nEnter Y: ";
    cin>>y;
    result = pow(x, (1/y));
    cout<<"\nResult:"<< result<<endl;
}
// case 11
void inverseCube(){
    cout<<"Enter X: ";
    cin>>x;
    y = 3;
    result = pow(x, (1/y));
    cout<<"\nResult:"<< result<<endl;
}
// case 12
void powerOf10(){
    cout<<"Enter X: ";
    cin>>x;
    result = pow(10,x);
    cout<<"\nResult:"<< result<<endl;
}
// case 13
void fact(){
    cout<<"Enter X: ";
    cin>>x;
    result = 1;
    for(int i = 1; i <= x; i++) {
        result = result * i;
    }
    cout<<"\nResult:"<< result<<endl;
}
// case 14
void percentage(){
    cout<<"\nEnter Total value: ";
    cin>>y;
    cout<<"Enter Obtain value: ";
    cin>>x;
    result = (x / y) * 100;
    cout<<"\nResult: "<< result<<endl;
}
// case 15
void logToTHeBase10(){
    cout<<"Enter X: ";
    cin>>x;
    result = log10(x);
    cout<<"\nResult: "<< result<<endl;
}
// casse 16 
void modulos(){
    cout<<"Enter X: ";
    cin>>a;
    cout<<"\nEnter Y: ";
    cin>>b;
    result = a % b;
    cout<<"\nResult:"<< result<<endl;
}
// case 17
void Sin(){
    cout<<"Enter X: ";
    cin>>x;
    result = sin(x * 3.14159 / 180);
    cout<<"\nResult: "<< result<<endl;
}
// case 18
void Cos(){
    cout<<"Enter X: ";
    cin>>x;
    result = cos(x * 3.14159 / 180);
    cout<<"\nResult: "<< result<<endl;
}
// case 19
void Tan(){
    cout<<"Enter X: ";
    cin>>x;
    result = tan(x * 3.14159 / 180);
    cout<<"\nResult: "<< result<<endl;    
}
// case 20
void Cosec(){
    cout<<"Enter X: ";
    cin>>x;
    result = 1 / (sin(x * 3.14159 / 180));
    cout<<"\nResult: "<< result<<endl;
}
// case 21
void Cot(){
    cout<<"Enter X: ";
    cin>>x;
    result = 1 / tan(x * 3.14159 / 180);
    cout<<"\nResult: "<< result<<endl;
}
// case 22
void Sec(){
    cout<<"Enter X: ";
    cin>>x;
    result = 1 / cos(x * 3.14159 / 180);
    cout<<"\nResult: "<< result<<endl;
}