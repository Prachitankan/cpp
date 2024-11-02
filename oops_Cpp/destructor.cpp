#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int* balance;
    public:
    Customer(string name, int bal){
        this->name = name;
        balance = new int;
        *balance = bal;
    }
    //Distructors are only used for delete dynamic resource
    ~Customer(){
        delete balance;
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    Customer A1("Prachi Tankan", 1000);
    return 0;
}

// class 2 ended