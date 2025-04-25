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

    cout<<"-----------------------string concatination (string addition)-------------------------"<<endl;
    // want to concatinate two strings
    string firstName = "Akash";
    string lastName = "Kanni";

    string fullName = firstName +" "+ lastName;
                    //Akash Kanni
    cout<<"Full Name will be :- "<<fullName<<endl;

    // append
    firstName.append(" ");
    firstName.append(lastName); 
    //append means add the string to the end of given input string
    //AkashKanni
    cout<<"firstName :- "<<firstName<<endl;

    // push_back :- when you want to add a character at the end of the string
    firstName = "Akash";
    char b = 'b';
    firstName.push_back(b);
    // 
    cout<<"pushback for firstName :- "<<firstName<<endl;  //Akashb


     cout<<"-----------------------string comparision-------------------------"<<endl;
    // check wheather both strings are same, similarity of strings
    str_1 = "abc", str_2 = "abc";
    // == 
    // str_1.compare(str_2)
    // .compare() ka output hmesha boolean mai aayega   (0/1)
    // when both strings are same the output will be 1

    bool matchRes = str_1 == str_2;
    // when both the strings are same then the output will be 1
    // when both are not same then the answer will be 0
    cout<<"matchRes :- "<<matchRes<<endl;  // 0

    bool matchResult = str_1.compare(str_2);
    // when both the strings are same then the output will be 0 
    // when both are not same then the answer will be 1 
    cout<<"matchResult :- "<<matchResult<<endl;  // 0

    cout<<"---------------------------substring--------------------------"<<endl;
    // substring :- 
    str_1 = "akashkanni";
    str_2 = "ak";
    // is str_2 a substring of str_1 ----> yes
    // is str_1 a substring of str_2 ----> no

    // lets find a substring
    // syntax :- 
    // string subString = inputString.substr(pos, len);
    // pos (int) :- it is the starting index from where you want your substring to start
    // len (int) :- the total length of substring you want
    string inputString = "crazyCoders";

    // c r a z y C o d e r s  
    // 0 1 2 3 4 5 6 7 8 9 10
    string subString = inputString.substr(4, 5);
    cout<<"the substring will be :- "<<subString<<endl; //yCode

    subString = inputString.substr(2);   //substr(0, 11)
    // when you dont define the pos by default it be 0
    // when you dont define the len by default it be equal to (length of inputString - pos) (11)
    cout<<"the substring will be :- "<<subString<<endl; //azyCoders
    // length = (11 - 2) = 9 


    // diff between substring and subset

    // substring :- it is continuous part of the inputString
    // inputString 
    // c r a z y C o d e r s     --> cr, yC, Coders ---> These are substring
    //                           --> aCod, raer           ---> These are not substring 

    //Subsets :- The subset conatins the characters of inputString in order but they may not be continuos part
    // --> aCod, raer           ---> These are not substring, These are subsets

    // sza :- This is neighter a substring nor a subset


}
