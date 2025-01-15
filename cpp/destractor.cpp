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
    //destractor
   ~Student(){
    cout<<"Hello I delete everything"<<endl;
    delete cgpaPtr;
   }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Cgpa: "<<*cgpaPtr<<endl;
    }

};


int main(){
 Student s1("Ragib Hasan",3.9);
 s1.getInfo();
}