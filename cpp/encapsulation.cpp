//encapsulation
//: encapsulation is wrapping up of data & member functions in a single unit called class
//used for hiding data

//abstraction
//inheritance
//polymorphism
#include <iostream>
#include <string>
using namespace std;
class Account{
    private:
    double balance;
    string password;//data hiding

    public:
    string accountId;
    string username;
}
int main(){
    return 0;
}