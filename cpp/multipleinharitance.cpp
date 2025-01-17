//inharitance:
//when properties & member functions of base class are passed on derived class
//based class 
//derived class
//in distractor the child print first then parents
//in constractor its vice versa
#include <iostream>
#include <string>
using namespace std;
class Student{
public:
 string name;
 double rollno;
};
class Teacher{
    public:
  string subject;
  double salary;
};
class TA :public Student,public Teacher{
};

int main(){
TA t1;
t1.name="Tony Stark";
t1.subject="engineering";
cout<<t1.name<<endl;
cout<<t1.subject<<endl;

}