#include <iostream>
using namespace std;

class student
{
    string name;
    int age, roll_number;
    string grade;

public:
    void setname(string n) { name = n; }
    void setage(int a) { age = a; }
    void setrollno(int r) { roll_number = r; }
    void setgrade(string g) { grade = g; }

    string getname()
    {
        cout << name << endl;
    }
    
};

int main()
{
    student s1;
    s1.setname("John Doe");
    s1.setage(20);
    s1.setrollno(3456789);
    s1.getname();
}