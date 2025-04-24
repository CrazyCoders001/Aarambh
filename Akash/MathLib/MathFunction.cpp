#include<bits/stdc++.h>
using namespace std;

int main(){

    cout<<"----------------Math inbuild functions------------"<<endl;

    // MAX  :- It will ouput max value from the give input set
    int maxValue = max(2, 10);
    cout<<"Max value between 2 and 10 is :- "<<maxValue<<endl;


    // MIN   :- It will ouput min value from the give input set
    int minValue = min(2, 10);
    cout<<"Min value between 2 and 10 is :- "<<minValue<<endl;

    // sqrt :- It will give the sqaure root of the input
    int input = 25;
    int sqRoot = sqrt(input);
    cout<<"Square root of 25 is :- "<<sqRoot<<endl;


    // ceil       :- 
    /*
        input is 4.3, and i want to fetch/get the closest maximum and greater than input 
        answer will be 5 
    */
   double inp = 4.3;
   int ceilValue = ceil(inp);
   cout<<"The ceil value of 4.3 is :- "<<ceilValue<<endl;  // 5


    // floor :-
    /*
        input is 4.3, and i want to fetch/get the closest minimum and less than input 
        answer will be 4
    */
   int floorValue = floor(inp);
   cout<<"The floor value of 4.3 is :- "<<floorValue<<endl; // 4



    // round
    cout<<"----------------------round function---------------"<<endl;
    // round function is used to convert floating point variables to integers
    // while doing round when the decimal point is from x.1 to x.4 (x can be any integer) 
    // --> so the integer answer of input will be nearest smallest int value (4.3 -> 4)

    // while doing round when the decimal point is from x.5 to x.9 (x can be any integer) 
    // --> so the integer answer of input will be nearest greater int value (4.7 -> 5)

    int lowerRound = round(4.3);
    int higherRound = round(4.7);

    cout<<"lowerRound of 4.3 is :- "<<lowerRound<<endl;
    cout<<"higherRound of 4.7 is :- "<<higherRound<<endl;

    // pow
    cout<<"----------------------pow function---------------"<<endl;
    // power function is used to get the power value and the syntax will look like this
    // int ans =  pow(base, exponent)

    int base = 5;
    int Exponent = 3;
    int powerValue = pow(base, Exponent);   //5*5*5 = 

    cout<<"The powerValue for pow(5,3) is :- "<<powerValue<<endl;

    // abs
    cout<<"----------------------abs function---------------"<<endl;
    // int absValue = abs(input);
    // the absolute function give the absolute value (It removes the sign for example the negative sign)
    input = -10;
    int inp1 = 20;


    cout<<"The absolute value of -10 : "<<abs(input)<<endl;
    cout<<"The absolute value of 20 : "<<abs(inp1)<<endl;
}
