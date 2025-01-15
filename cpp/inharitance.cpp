//inharitance:
//when properties & member functions of base class are passed on derived class
//based class 
//derived class
//in distractor the child print first then parents
//in constractor its vice versa
#include <iostream>
#include <string>
using namespace std;
class Person{
public:
string name;
int age;
Person(string name,int age){
      this->name=name;
      this->age=age;
}

};
class Student:public Person{
    //name age rollno
    public:
    int roll;
    Student(string name,int age,int roll) : Person(name,age){
        this->roll=roll;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"roll:"<<roll<<endl;
    }
};
int main(){
Student s1("Ragib",23,2345);

s1.getInfo();
}