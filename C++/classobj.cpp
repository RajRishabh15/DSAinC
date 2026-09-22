//Rishabh Raj
//RA2511033010032
#include<iostream>
#include<string>      //iostream and string header files
using namespace std;     
class BankAccount{
private:         //private acess specifier
    string accholder;
    double balance;
public:         //public access specifier
    // Parameterized Constructor
    BankAccount(string name,double balance){
        accholder=name;
        balance=balance;
        cout<<"Constructor called for "<<name<<endl;
    }
    void deposit(double amount){  
        balance+=amount;
    }
    void display(){
        cout<<"Holder:"<<accholder<<", Balance:"<<balance<<endl;
    }
};
int main(){
    BankAccount acc1("Rishabh",1000);  //constructor calling
    acc1.deposit(500);
    acc1.display(); //Method to display account details
    return 0;
}





