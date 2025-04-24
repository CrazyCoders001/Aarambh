#include <iostream>
using namespace std;
int main() {
    string str_1 = "Arjun";
    string str_2 = "Satyajit";
    
    cout<<"My name is "<<str_1<<endl;
    cout<<"Arjun and "<<str_2<<" are best friends"<<endl;
    
    cout<<"Length of the given string is :- "<<str_2.length()<<endl;
    cout<<"Length of the given string is :- "<<str_1.length()<<endl;
    
    int start_index = 0;
    int end_index = str_2.length() - 1;
    cout<<"The starting position is "<<start_index<< " and end position is "<<end_index<<endl;
    cout<<"Print first character "<<str_1[start_index]<<endl;
    cout<<"Print last character "<<str_2[end_index]<<endl;
    cout<<"Print 5th character "<<str_2[4]<<endl;

    return 0;
}
