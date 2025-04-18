#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"------------------------------Logical Operator-----------------------"<<endl;
    // The output of logical operator is always in boolean


    cout<<"--------------AND--------------------"<<endl;

    // Logical AND :- &&
    // AND ke properties
    // Whenevever both the operands are true then only the AND operation will be true
    // AND works on two operands

    bool opOne = false, opTwo = true;

    /*

                opeOne &&  opTwo        Result
                 true       true         true/1
                 true       false        false/0
                 false      true         false/0
                 false      false        false/0
    */

   cout<<"Both operands are true : "<<(true && true)<<endl;
   cout<<"first operands is true second is false: "<<(true && false)<<endl;
   cout<<"first operands is false and second is true : "<<(false && true)<<endl;
   cout<<"Both operands are false : "<<(false && false)<<endl;


    cout<<"--------------OR--------------------"<<endl;
    // Logical OR  :- ||
    // OR ke properties
    // If any one of the operand is true then the output will be true
    // OR works on two operands

    /*

                opeOne ||  opTwo        Result
                 true       true         true/1
                 true       false        true/1
                 false      true         true/1
                 false      false        false/0
    */

   cout<<"Both operands are true : "<<(true || true)<<endl;
   cout<<"first operands is true second is false: "<<(true || false)<<endl;
   cout<<"first operands is false and second is true : "<<(false || true)<<endl;
   cout<<"Both operands are false : "<<(false || false)<<endl;

    cout<<"--------------NOT--------------------"<<endl;
    // Logical NOT :- !
    // NOT ke properties
    // The result of logical not will be exact opposite of the input
    // It works only one operand

    /*
        opeOne     !     Result 
        true               ?
        false              ?
    */

   cout<<"When input is true :- "<<(!true)<<endl;
   cout<<"When input is false :- "<<(!false)<<endl;


    return 0;
}
