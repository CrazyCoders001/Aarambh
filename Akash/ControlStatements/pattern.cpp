#include<bits/stdc++.h>
using namespace std;

int main(){

  // nested loops :- Nested loop is nothing a loop inside another loop

  /*
   for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        code .....
    }
   }
  */

  // what is the time complexity to run a nested loop

  // Time complexity :- Time complexity is the number of compute cycles required to run the code
  // compute cycle is equivalent to one iteration


  int n=10, m=5; 
  int count = 0;
  for(int i=1; i<=n; i++)
  {
    // when i=1 then inside loop will run for j=1 to j=m (5)
    //      i=2 ------------//---------------------------- (5)
    //      i=3 ------------//---------------------------- (5)
    //      i = 4 to 9
    //      i=n (10) ------------------//----------------  (5)
    cout<<"When i is equal to :- "<<i<<endl;
    for(int j=1; j<=m; j++)
    {
        cout<<"j is :- "<<j<<endl;
        count++;
        cout<<"hello "<<count<<endl;   // Total number of hello :- ?

    }
  }

  // Total number of hellow :- n * m = 10 * 5 = 50
  // TC is O(n*m)

cout<<"---------------------------Increasing pattern----------------------"<<endl;

/*
   
   *              i = 1        number of start = 1
   * *            i = 2        number of start = 2
   * * *          i = 3        number of start = 3
   * * * *        i = 4        number of start = 4
   * * * * *      i = 5        number of start = 5
   
*/

// When solving loop problems try and use for loop for simplicity
// always name the constraints as row and col
// try to start i and j with 1 instead of 0

int rows = 5, cols = 5;

for(int i=1; i<=rows; i++)        // this is used to print the rows
{
    // when i =1 the stars are 1
   for(int j=1; j<=i; j++){          // this loop is used to print the number of stars
        cout<<"*";
   }
   cout<<endl;
}


/*

// i am denoting blank space with 's'
row = 4
s s s *                  i = 1     space = 3     stars = 1             (2 * i) - 1
s s * * *                i = 2     space = 2     stars = 3
s * * * * *              i = 3     space = 1     stars = 5
* * * * * * *            i = 4     space = 0     stars = 7


*/

cout<<"---------------------------Hill pattern----------------------"<<endl;
rows = 4;

for(int i=1; i<=rows; i++){       // this is used to create new row

int j;
    // for printing space you will need a for loop
    for(j=rows-i; j>=1; j--)
    {
        cout<<" ";
    }

    // for printing stars you will need a for loop
    for(j=1; j<=2*i-1; j++)
    {
       cout<<"*";
    }
    cout<<endl;



} 

cout<<"---------------------------Reverse Hill pattern----------------------"<<endl;

}
