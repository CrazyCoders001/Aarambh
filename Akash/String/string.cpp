#include<bits/stdc++.h>
using namespace std;

int main(){

    //-------------------------------very very important--------------------
    cout<<"--------------------------string------------------------"<<endl;

    // Defination :- A string is a sequence of characters, which is enclosed between double quotes
    // string str = "absjjgucbjdbkjb";

    cout<<"-----------------------length-------------------------"<<endl;
    string str_1 = "crazyCoders";
    string str_2 = "Aarambh";

    // find the string length
    // syntax int length = str_1.length();
    cout<<"The length of "<<str_1<<" is :- "<<str_1.length()<<endl;
    cout<<"The length of "<<str_2<<" is :- "<<str_2.length()<<endl;

    // when you are calculating the length of string then the answer will be total number of characters
    // "crazyCoders"  --> total chars = 11 , length = 11

    cout<<"-----------------------string access-------------------------"<<endl;
    // A string is a sequence of characters
    // The Sequence starts from START_INDEX = 0, and it will end at END_INDEX = string_length - 1;

    // c r a z y C o d e r s            ---> length = 11
    // 0 1 2 3 4 5 6 7 8 9 10 11
    int start_index = 0;
    int end_index = str_1.length()-1;   // at index length - 1
    cout<<"Start position :- "<<start_index<<" the last position :- "<<end_index<<endl;  //
    cout<<"Print first character :- "<<str_1[start_index]<<endl;   // c
    cout<<"Print last character :- "<<str_1[end_index]<<endl;      // s
    cout<<"print 4th character :- "<<str_1[3]<<endl;

    // want to concatinate two strings
    // check wheather both strings are same
}
