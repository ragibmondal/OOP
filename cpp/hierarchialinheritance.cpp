#include <iostream>
#include <string>
using namespace std;
//one parent to multiple child 
//parent class person(name,age ) student teacher class
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
  public :
  int rollno;  
};
class Teacher:public Person{
    public:
    string sub;


};
int main(){

}