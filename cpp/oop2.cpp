//constractor: constractor is a special mathod  invoked automatically at time of object creation. Used for Initialisation
//same name as class
//constractor doesnot have a return type
//Only called once(automatically),at object creation (always public)
//Memory allocation happens when constractor is called
//3 types of constractor
//non-parameterized
//parameterized 
//copy constractor

#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
  double salary;
public:
//constractor
//non-parameterized constractor
Teacher(){
  dept="Computer Science";
}

  //properties
  string name;
  string dept;
  string subject;

  //mathod /member function
  void changeDept(string newDept){
    dept=newDept;
  }
  //setter
  void setSalary(double s){
    salary=s;
  }
  //getter
  double getSalary(){
    return salary;
  }
};

int main(){
    Teacher t1;//constractor call (when we create a new object)
    Teacher t2;//again it calls constractor
    t1.name="Shradha Didi";
    t1.subject="C++";
    t1.setSalary(25000);
    cout<<t1.dept<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}