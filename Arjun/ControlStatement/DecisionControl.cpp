#include <bits/stdc++.h>
using namespace std;

int main(){
    
    cout<<"---------------Example 1-------------------"<<endl;
    //Check whether the person is eligible for vote or not?
    int age = 40;
    
    if(age>=18)
    {
        cout<<"Eligible to vote."<<endl;
    }
    
    else
    {
        cout<<"Not eligible to vote."<<endl;
    }
    
    cout<<"Thank you"<<endl;
    
   

    cout<<"---------------Example 2-------------------"<<endl;
    //Check whether the entered number is Positive, Negative or Zero.
    
    int num = -256;
    
    if(num>0) {
        cout<<"Number is positive"<<endl;
    }
    
    else if(num<0) {
        cout<<"Number is negative"<<endl;
    }
    
    else {
        cout<<"Number is zero"<<endl;
    }
    
    return 0;
}
