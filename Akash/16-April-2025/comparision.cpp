#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"---------------------------Comparision/Relational operators-------------------------"<<endl;
    // ==, >=, <=, !=, >, <
    // comparision operator use case :- Two compare two variables

    int num1 = 10, num2 = 20;

    // ==
    bool equalOp = num1 == num2;     
    cout<<"equalOp :- "<<equalOp<<endl;   //0 or false

    // >=
    bool greaterThanOrEqualTo = num1 >= num2;
    cout<<"greaterThanOrEqualTo :- "<<greaterThanOrEqualTo<<endl;   //0

    // <=
    bool lessThanOrEqualTo = num1 <= num2;
    cout<<"lessThanOrEqualTo :- "<<lessThanOrEqualTo<<endl;   //1 

    // !=
    bool notEqualTo = num1 != num2;
    cout<<"notEqualTo :- "<<notEqualTo<<endl;   //1 

     // >
    bool greaterThan = num1 > num2;
    cout<<"greaterThan :- "<<greaterThan<<endl;   //0

    // <
    bool lessThan = num1 < num2;
    cout<<"lessThan :- "<<lessThan<<endl;   // 1


    return 0;
}
