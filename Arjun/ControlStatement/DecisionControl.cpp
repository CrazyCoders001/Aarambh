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

    cout<<"---------------Example 3----------------"<<endl;
    //Write a program that prints whether it is even or odd.
    int num1 =10;
    
    if(num1%2==0) {
        cout<<"Number is Even."<<endl;
    }
    
    else {
        cout<<"Number is Odd."<<endl;
    }
    
    cout<<"---------------Example 4----------------"<<endl;
    //Write a program to check whether the year is leap year or not?
    int year = 1892;
    
    if(year%4==0)
    {
        cout<<"Entered year is leap year."<<endl;
    }
    
    else
    {
        cout<<"Entered year is not a leap year."<<endl;
    }
    
    cout<<"---------------Example 5----------------"<<endl;
    //Write a program to find the greater of two numbers.
    
    int a = 556;
    int b = 256;
    
    if(a>b) {
        cout<<"A is greater than B."<<endl;
    }
    
    else {
        cout<<"B is greater than A."<<endl;
    }
    
    /*cout<<"---------------Example 6----------------"<<endl;
    //determine whether it is a vowel or consonant...
    
    char Alphabet = 'q';
    
    if(Alphabet =='a' || Alphabet =='e' || Alphabet =='i' || Alphabet =='o' || Alphabet =='u')
    {
        cout<<"Entered Alphabet is Vowel."<<endl;
    }
    
    else
    {
        cout<<"Entered Alphabet is Consonant."<<endl;
    }
    */
    return 0;
}
