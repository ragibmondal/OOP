/*Suppose you have a class Employee with the following structure:

Private members: id (int), salary (float).
Public methods: A parameterized constructor to initialize the members and a
 method showDetails() to display them.*/
#include <iostream>
#include <string>
using namespace std;
class Employee{
    string id;
    double salary;
    public:
    Employee(string id,double salary){
        this->id=id;
        this->salary=salary;
    }
    void getInfo(){
        cout<<"Id: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
 Employee *abul= new Employee("Abul Gong",4567.67);
 abul->getInfo();
}