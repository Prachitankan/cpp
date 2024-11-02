#include<bits/stdc++.h>
using namespace std;

class Constructor{
    string name;
    int account_number;
    int balance;
    public:
    // Default constructor
    Constructor(){
        cout<<"Default constructor is called"<<endl;
    }
    //Parameterise constructor
    Constructor(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        cout<<"Parametrized constructor is called"<<endl;
        cout<<name<<endl<<account_number<<endl<<balance<<endl;
    }

    void print(){
        cout<<name<<endl<<account_number<<endl<<balance<<endl;
    }
    //copy constructor
    Constructor(Constructor & B){
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
        cout<<"Copy constructor is called"<<endl;
        print();
    }

};

int main()
{
    Constructor A1("Chitti Tankan", 123, 1000);
    Constructor A2(A1);   // Copy constructor
    
    return 0;
}