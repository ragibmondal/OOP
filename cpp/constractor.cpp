//constractor: constractor is a special mathod  invoked automatically at time of object creation. Used for Initialisation
//same name as class
//constractor doesnot have a return type
//Only called once(automatically),at object creation (always public)
//Memory allocation happens when constractor is called
//3 types of constractor
//non-parameterized
//parameterized 
//copy constractor--->>>> special constractor  used to copy properties of  one object  into another.


//Type differrnt howake bole constractor overloading in multiple constractor
//constractor overloading is an example of polimorfism
//"this" is a special poiner in c++ that points to the current object
//this->prop is same as *(this).prop

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
//constractor
//non-parameterized constractor
Teacher(){
  dept="Computer Science";
}
//parameterized
/*Teacher(string n,string d,string s,double sal){
name=n;
dept=d;
subject=s;
salary=sal;
}*/
Teacher(string name,string dept,string subject,double salary){
this->name=name;
this->dept=dept;
this->subject=subject;
this->salary=salary;
}
//copy constractor
//shallow & deep copy

Teacher(Teacher &orgObj){//pass by reference
   
   cout<<"i am custom copy constractor..."<<endl;
   this->name=orgObj.name;
   this->dept=orgObj.dept;
   this->subject=orgObj.subject;
   this->salary=orgObj.salary;
}


  //mathod /member function
  void changeDept(string newDept){
    dept=newDept;
  }
  void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"Depertment: "<<dept<<endl;
    cout<<"Subject: "<<subject<<endl;
    cout<<"Salary: "<<salary<<endl;
  }
};

int main(){
    Teacher t1("Ragib","Computer Science","C++",75000);//constractor call (when we create a new object)
    t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();//custom copy constractor called 
    

    return 0;
}