#include<bits/stdc++.h>
using namespace std;

int main(){

    // Control statements are for defining the flow of code

    // Types of control statements

    // 1. Decision control :- if, else, else if

    // if mnje marathila jar, else marathithla 
    int age = 15; // if age is 18 or greater then only he/she vote

    cout<<"--------------------------Vote eligibility------------------------------------"<<endl;
    //comparasion operators >=
    if (age >= 18)                               // jar
    {
        cout<<"The user can vote"<<endl;  
    }
    else{                                        // tar
        cout<<"The user cannot vote"<<endl;      // 1
    }

    cout<<"--------------------------Licence eligibility------------------------------------"<<endl;
    // else if :- netsed condition check
    age = 23;
    // 1. if age is greater than or equal to 18, usko permananet licence grant karo      
    // 2. else if age is greater than or equal to 16 usko temporary licence grant karo
    // 3. else       ghar bhagao
    // 4. last step

    // first condition/line 1 will be checked, agar vo true raha to control last step ko jayega
    // agar first confition false raha to line 2 check hoga, and agar ye true raha to flow last statement ko jayega
    // then the flow will come to statement 3

    if(age >= 18){                                 // this will get false when age is below 18
        cout<<"Grant permanent license"<<endl;  // 1
    }
    else if(age >= 16){                           // this will get false when age is below 16
        cout<<"Grant temporary license"<<endl;   
    }
    else{
        cout<<"ghar bhejo"<<endl;
    }

    cout<<"last step"<<endl;          // 1



    
}
