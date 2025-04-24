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
    // pow
    // abs
}
