#include<bits/stdc++.h>
using namespace std;

// class customer{
//     string name;
//     int balance, acc_num;

//     public:

//     customer(string name, int balance, int acc_num){
//         this -> name = name;
//         this -> balance = balance;
//         this -> acc_num = acc_num;
//     }

//     //diposit
//     void deposit(int amount){
//         if(amount >= 1){
//             balance += amount;
//             cout<< amount<<" rs is Creadited sucessfully\n";
//         }
//         else{
//             throw "Amount should be greater than  zero ";
//         }
//     }

//     //withdrow
//     void withdrow(int amount){
//         if(amount > 0 &&  amount <= balance){
//             balance -= amount;
//             cout<< amount << " rs Withdrawn Successfully \n";
//         }
//         else if(amount < 1){
//             throw "Amount should be greater than  zero";
//         }
//         else{
//             throw " Your balance is low";
//         }
//     }

// };

int main()
{
    // customer C1("Prachi",5000,10);

    // try{
    // C1.deposit(200);
    // C1.withdrow(80000);
    // C1.deposit(300);
    // }
    // catch(const char *e)
    // {
    //     cout<<"Exception Occured: "<<e<<endl;
    // }



    try{
        int *p = new int[1000000000];
        cout<<"Memory allocaton is Successfull\n;";
        delete []p;
    }
    catch(const exception &e)
    {
        cout<< "Exception Occured due to line 60: "<< e.what()<<endl;
    }
    return 0;
}