#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"--------------------------Bitwise Operators-----------------------"<<endl;

    // Bitwise operators ke properties
    // 1. The Result of bitwise operator will be an integer/value
    // 2. It works on the bits of the input
    // 3. The input will be in form of int/value

    cout<<"------------------Bit AND---------------------------"<<endl;
    // Bitwise and &
    // properties
    // When both the operands are true then only the result will be true
    // two operands are used
    int num1 = 5, num2 = 3;
    /*
        5     :- 0 1 0 1       -> 2^3 + 2^2 + 2^1 + 2^0   -> 0 + 4 + 0 + 1 -> 5
        3     :- 0 0 1 1       -> 2^3 + 2^2 + 2^1 + 2^0   -> 0 + 0 + 2 + 1 -> 3
             ---------------
                 0 0 0 1       -> 2^3 + 2^2 + 2^1 + 2^0   -> 0 + 0 + 0 + 1 -> 1
    */
    int bitAndResult = num1 & num2;
    cout<<"bitAndResult :- "<<bitAndResult<<endl;

    
    cout<<"------------------Bit OR---------------------------"<<endl;
    // Bitwise or  |
    // properties
    // When any one of the operands is true then the result will be true
    // two operands are used
    /*
        5     :- 0 1 0 1       -> 2^3 + 2^2 + 2^1 + 2^0   -> 0 + 4 + 0 + 1 -> 5
        3     :- 0 0 1 1       -> 2^3 + 2^2 + 2^1 + 2^0   -> 0 + 0 + 2 + 1 -> 3
             ---------------
                 0 1 1 1       -> 2^3 + 2^2 + 2^1 + 2^0   -> 0 + 4 + 2 + 1 -> 7
    */
    int bitOrResult = num1 | num2;
    cout<<"bitOrResult :- "<<bitOrResult<<endl;

    cout<<"------------------Bit NOT---------------------------"<<endl;
    // Bitwise not ~
    // only one operand is used
    // it switches the true bit to false and false bit to true
    // it will output the answer in 2's complement

    int input = 6;
    /*
        6  =  0 1 1 0
        // 1. Value ka 8 bit representation linkho
        // 2. 8 bit representation ka negation karo (0 ka 1, 1 ka 0)
              // note karo, left most bit
              // if left most bit is 0 then the result will be positive
              // if left most bit is 1 then the result will be negative
        // 3. perform 1's complement (2nd step ka negation, 0 ka 1, 1 ka 0)
        // 4. add 1 in step 3
        // 5. convert the step 4 bit form into decimal, apply sign according to step 2

        0 0 0 0 0 1 1 0      this is the 8 bit representation
                 
        1 1 1 1 1 0 0 1      ~ performed

        iske bad two's complement lagao

        1's         - 0 0 0 0 0 1 1 0
                                    1
                    --------------------
                     0 0 0 0 0 1  1  1     -> -7

    */
   cout<<"bitwise not is :- "<<~input<<endl;

    // Bitwise XOR ^
    // left shift  <<
    // right shift >>

    return 0;
}
