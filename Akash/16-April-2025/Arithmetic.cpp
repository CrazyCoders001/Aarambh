#include<bits/stdc++.h>
using namespace std;

int main(){

    //Arithmetic operators
    // + addition
    // - sub
    // * mul
    // / div
    // % mod
    // ++
    // --

    

    // operator = it is used to perform operation on the operands
    // operand = operands are the values/varibles on which the operation is being performed

    int num1, num2;                 //declaring the varibles
    num1 = 10; num2 = 20;           //Intialization of the values


    // + addition
    int sum = num1 + num2;          //what are the operands, The answer is num1 and num24
                                    // what is the operator, + is the operator

    cout<<"Addition is = "<<sum<<endl;

    // - sub
    int sub = num1 - num2;
    cout<<"Substraction is = "<<sub<<endl;                // -10 

    // * mul
    int mul = num1 * num2;
    cout<<"Multiplication is = "<<mul<<endl;

    // / div
    int div = num1/num2;            //(10/20 = 0)  //reminder will be = 10
    cout<<"Division is = "<<div<<endl;

    // % modulous 
    int rem = num1 % num2;
    cout<<"The reminder is = "<<rem<<endl;

    cout<<"-----------------------------------------------------------"<<endl;
    // ++ Increment
    // post increment      = varName++
    // pre increment       = ++varName
    
    int intValue = 10;
    // intvalue++         = intValue = intValue+1
    int incrementedValue = intValue++;                   // intValue = intValue + 1
    cout<<"intValue "<<intValue<<endl;                   //11
    cout<<"incrementedValue "<<incrementedValue<<endl;   //10

    //post increment
    // int incrementedValue = intValue++;
    // pehle initialization ho raha hai, and after that increment will happen

    int preIncrement = ++intValue;                    
    cout<<"preIncrement "<<preIncrement<<endl;           //12
    cout<<"intValue "<<intValue<<endl;                   //12

    // pre increment
    //  int preIncrement = ++intValue; 
    // pehle increment ho raha hai, and after that it will gets assigned 


    cout<<"-----------------------------Decrement------------------------------"<<endl;
    //decrement

    //post decrement
    int intValue_2 = 10;
    int postDecrement = intValue_2--;
    cout<<"intValue_2 "<<intValue_2<<endl;                   // 9
    cout<<"postDecrement "<<postDecrement<<endl;             // 10

    //pre decrement
    int preDecrement = --intValue_2;
    cout<<"intValue_2 "<<intValue_2<<endl;                   // 8
    cout<<"preDecrement "<<preDecrement<<endl;               // 8

    return 0;
}
