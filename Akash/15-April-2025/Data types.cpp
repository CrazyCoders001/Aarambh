#include<bits/stdc++.h>
using namespace std;

int main(){

   //List of all data types
   /*
   int, char, string, float, double, boolean
   */

  // 1 byte = 8 bites (bits = 10010001)
  // int ka size hota hai 2 or 4 bytes, uska mtlb int certain level ke bad value accept nhi krega
  // max int value we can store is 2147483647

  int num = 2147483648;
  // cout<<num;

  // int mai float wala value assign kr diya
  // what was the impact and what that company suffered
  // 5 Rockets mid air mai blast ho gaye

  //Float
  // float can store value of 8 bytes (4 bytes for whole number and remaining 4 for the decimal number)
  // float can store 5-7 digits after decimal points
  float floatValue = 10.2222;
  float floatValue_2 = 10;

  cout<<floatValue<<endl;
  cout<<floatValue_2<<endl;

  //Double 
  // Double can store value of 16 bytes 
  // Double can store 15-16 digits after decimal points
  double doubleValue_1 = 12.003377773;
  cout<<doubleValue_1<<endl;

  //char 
  //characters always gets stored at backend in form of ascii values
  //ASCII :- American Standard Code for Information Interchange
  // type 'a' your computer always treat it in form of ascii (treat as 97)
  char charValue = 'a';
  cout<<charValue<<endl;

  //Boolean 
  // are used for storing the true or false value (either 0 or 1)
  bool boolValue = true;
  bool boolValue_2 = 0;

  bool boolValue_3 = 1.1;
  bool boolValue_4 = false;

  cout<<boolValue<<endl;
  cout<<boolValue_2<<endl;
  cout<<boolValue_3<<endl;
  cout<<boolValue_4<<endl;

  //string 
  // A string is a collection of characters
  // A string is a array of characters
  string str = "akash";
  string str_1 = "12#$#%$#$ash";

  cout<<str<<endl;
  cout<<str_1<<endl;
  // cout<<str[0]<<endl;
}
