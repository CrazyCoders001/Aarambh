#include<bits/stdc++.h>
using namespace std;

int main(){

    // 2. Loop Control   :- for, while, do while

    // Why we should use loops? :- To avoid repetation of code
                                 //To write maintainable code
                                 //To write readable code
    

    cout<<"--------------------For loop---------------------"<<endl;
    // for :- it is used to perform iteration 
    // syntax :- for(initialization; condition; increment/decrement)

    // 10 bar hello world print karo
    for(int i=1; i <= 10; i++)           //jb condition false hoga code flow for ke bahar jayega
    {
        cout<<"Hello world for i = "<<i<<endl;
         // i = i + 2;
    }

    /*
        i=1       ---> i--
        i=0       ---> i--
        i=-1      ---> i--

        i= negative infinity

        i will always be less than 10   -- ctrl + c

    */

    cout<<"For ke bahar"<<endl;

    //1, 3, 5, 7, 9, 11

   /*
   
   i=1      ---- 1<=10? yes   print   i++   , i+=2  1+=2 = 3
   i=2      ---- 2<=10? yes   print   i++                  
   i=3
   i=4
   i=5
   i=6
   i=7
   i=8
   i=9
   i=10   ---- 10<=10? yes  print i++
   i=11        11<=10? false
   */


   cout<<"--------------------While loop---------------------"<<endl;
  //while
  /*
    So while loop mai 3 chize ko ke bare mai dyan dena hai
    1. Initialization
    2. Condition
    3. Increment/Decrement

    Syntax :-
    Initialization of variable will be done outside the loop

    1. Initialization
    while(2.CONDITION_CHECK){
        code block 1
        code block 2


        3. INCREMENT/DECREMENT
    }
  */

  // I want to print numbers from 1 to 10, using while loop
  // Intilization --> ?
  // While(condition -- ?)
  // Increment --> ?

    int i = 1;
    while(i <= 10){         //Condition pehle check ho raha hai before running code block
        cout<<i<<" ";
        i++;
    }


cout<<endl<<"--------------------do While loop---------------------"<<endl;
  //do while
  /*
    Syntax :
    1. Initialization
    2. code flow will go inside while loop, even without checking the condition for 1st iteration
    3. Code block runs
    4. Increment/Decrement
    5. Last mai, Condition check

    Initialization
    do{
        code block ....

        Increment/Decrement
    }while(Condition);
  */

   // I want to print numbers from 10 to 1, using do while loop 
   // While your are studying please focus on studies only, chala ekda mati khaun bgu
   i = 10;
   bool var = false;
   do{
    cout<<i<<" ";
    i--;
   }while(var); //condition false hoga to bahar aa jayega



    cout<<endl<<"--------------------switch case loop---------------------"<<endl;
  //switch

  // Check multiple condition
  // if use karke bhi kr skte hai, but is chiz mai code readable nhi bnega (ganda coding)
  // Easy to modify
  // Used to write the user driven code

  // take user input to perform actions until the user dont want to exit
  /*
     Initialization
     switch(InitializedValue){
        case XX: 
            code block...
            break;
        case yy:
            code block ...
            break;
        case nn;
            code block
            break;
        default;
            cout<<"EXIT :-"<<endl;
     }
  */

 /*
     Take user input for variable action, and according to the action perform operation
     operations like 
     1. add
     2. sub
     3. div 
     4. mult
 */
  

  // in switch you cant use strings as choice or for condition check

  bool cond = true;
  do{
  cout<<"press 1 for add, press 2 for sub, and anything else for exit"<<endl;  
  int action;
  cin>>action;

    cout<<"Enter user inputs"<<endl;
    int num1, num2;
    cin>>num1>>num2;

  switch(action){
    case 1:                // agar 1 hai to add karo
        cout<<"Addition will be :- "<<num1+num2<<endl;
        break;
    case 2:               // agar 2 hai to substract karo
        cout<<"Substraction is :- "<<num1-num2<<endl;
        break;
    default:
        cout<<"EXIT"<<endl;
        cond = false;
  }
  }while(cond);

  //task is to complete multiplication and divison

   // input flush
  // jb bhi apan input lete hai user se and we press enter, 
  // then the os thinks the enter operation is the input for next input opearation


  // word problem ko, if else vagaire use karo aur solve karo, and usko github pe submit karo
  // submission, under your folder, aaj ka date and prbm_1.cpp
    
}
