/*Write a C++ program to dynamically create an object of a class Student using
 a pointer. The class should contain the following:

Private members: name (string), age (int).
A parameterized constructor to initialize these members.
A public member function display() to print the details of the student.*/
#include <iostream>
#include <string>
using namespace std;
class Student{
string name;
int age;
public:
Student(string a,int b){
    name=a;
    age=b;
}
void display(){
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
}
};
int main(){
  Student *ptr=new Student("Abul MAl",56);
  ptr->display();
}