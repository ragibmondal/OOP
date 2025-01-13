#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
  double salary;
public:
  //properties
  string name;
  string dept;
  string subject;
  
  //Access Modifiers
  //private: DATA & mathods accessiable inside class

  //public: data & mathods accessible to everyone

  //protected: data &mathods accessible inside class & to its derived class


  //mathods//member function
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
    Teacher t1;
    t1.name="Shradha Didi";
    t1.subject="C++";
    t1.dept="Computer Science";
    t1.setSalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;

    return 0;
}