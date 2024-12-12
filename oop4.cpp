#include<iostream>
#include<fstream>
using namespace std;
class employee
{
    char name[20];
    int id;
    double salary;
    public:
    void accept()
    {
        cin>>name;
        cin>>id;
        cin>>salary;
    }
    void display()
    {
        cout<<"Name : "<<name;
        cout<<"ID :"<<id;
        cout<<"Salary : "<<salary;
    }
};
int main()
{
    employee o[5];
    fstream f;
    int n,i;
    f.open("a.txt");
    cout<<"\nHow many employees information you want to store ? ";
    cin>>n;
    cout<<"\nEnter the information in this format(name/id/salary)";
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter the information of "<<i<<"Employee";
        o[i].accept();
        f.write((char*)&o[i],sizeof o[i]);

    }
    f.close();
    f.open("a.txt");
    cout<<"\ninformation of employees is as follows";
    for(i=0;i<n;i++)
    {
        f.write((char*)&o[i],sizeof o[i]);
        o[i].display();
    }
    f.close();
    return 0;
}