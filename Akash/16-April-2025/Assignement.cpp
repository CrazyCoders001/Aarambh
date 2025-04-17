#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"---------------------------Assignment operators-------------------------"<<endl;
    // =, -=, +=, *=, /=, %=

    // =
    int num = 10;
    int assinValue = num;        // 10

    // -=
    int subEqualValue = 10;
    subEqualValue -= 2;           // subEqualValue = subEqualValue - 2;       //subEqualValue = 8
    cout<<"subEqualValue :- "<<subEqualValue<<endl;
    
    // +=
    int addValue = 10;
    addValue += 2;              // addValue = addValue + 2     --> addValue = 10 + 2   --> addValue = 12 
    cout<<"addValue :- "<<addValue<<endl;       // 12

    // *=
    int muValue = 10;
    muValue *= 2;
    cout<<"muValue :- "<<muValue<<endl;      // mulValue = 20

    // /=
    int divValue = 10;
    divValue /= 2;
    cout<<"divValue :- "<<divValue<<endl;   // divValue = 5

    // %=
    int modValue = 10;
    modValue %= 2;                          // modValue = modValue % 2  --> modValue = 10 % 2;  --> modeValue = 0;
    cout<<"modValue :- "<<modValue<<endl;   // modValue = 0


    return 0;
}
