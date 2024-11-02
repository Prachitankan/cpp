//They are attributes of class member
//static member function
#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int acc_num, balance;
    static int total_cnt;
    static int total_balance;
    public:
    //constructor
    customer(string name, int acc_num, int balance){
        this->name = name;
        this -> acc_num = acc_num;
        this -> balance = balance;
        total_cnt++;
        total_balance += balance;
    }

    //Static function
    static void acceStatic(){
        cout<<"Total customer : "<<total_cnt<<endl;
        cout<<"Total balance : "<<total_balance<<endl;
    }
    void deposit(int amount) {
        if(amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    void withdrow(int amount) {
        if(amount <= balance && amount > 0){
            balance-=amount;
            total_balance -= amount;
        }
    }
    void display(){
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_cnt<<endl;
    }
};

//Initialization of total count
int customer :: total_cnt = 0;
int customer :: total_balance = 0;

int main()
{
    customer A1("Prachi",123,1000);
    customer A2("Massao",456,12020);
    customer A3("Shinchan",987,3000);
    A1.deposit(480);
    A2.withdrow(200);
    customer::acceStatic();
    
    return 0;
}