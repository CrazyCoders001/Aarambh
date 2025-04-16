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

    return 0;
}
