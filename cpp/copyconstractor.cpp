#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    double* cgpaPtr;
    Student(string name,double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;

    }
    Student(Student &obj){
        this->name=obj.name;
        this->cgpaPtr=obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Cgpa: "<<*cgpaPtr<<endl;
    }
};


int main(){
 Student s1("Ragib Hasan",3.9);
 s1.getInfo();
 Student s2(s1);
 *s2.cgpaPtr=9.2;
 s2.getInfo();
 return 0;
}