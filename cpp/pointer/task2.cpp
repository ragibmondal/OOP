/*Explain the concept of a pointer to a member function in C++.

Write a program to demonstrate this concept with a class Calculator that contains:

A member function add(int, int) to return the sum of two integers.
A pointer to this member function.
Use the pointer to call the add() function.
*/
#include <iostream>
#include <string>
using namespace std;
class Calculator{
public:
add(int a,int b){
    return a+b;
}
};
int main(){
 int(Calculator::*ptr)(int,int)=&Calculator::add;
 Calculator n;
 cout<<"sum: "<<(n.*ptr)(100,200)<<endl;
}