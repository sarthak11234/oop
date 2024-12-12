#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class db
{
    int roll;
    char name[20];
    char eclass[10];
    char div[10];
    char dob[10];
    char bg[3];
    char contact[20];
    char phone[12];
    char license[12];

    public:
    static int stdno;
    static void count()
    {
        cout<<"\n no. of objects created : "<<stdno;
    }
    void fin()
    {
        cout<<"\nInline func"<<endl;
    }

    db()
    {
        roll=0;
        strcpy(name,"Sachin");
        strcpy(eclass,"SE");
        strcpy(div,"B");
        strcpy(dob,"11/12/23");
        strcpy(bg,"A+");
        strcpy(contact,"xyz");
        strcpy(phone,"892002933");
        strcpy(license,"gh24");
        ++stdno;
    }
    db(db *ob)
    {
        strcpy(name,ob->name);
        strcpy(eclass,ob->eclass);
        strcpy(div,ob->div);
        strcpy(dob,ob->dob);
        strcpy(bg,ob->bg);
        strcpy(contact,ob->contact);
        strcpy(phone,ob->phone);
        strcpy(license,ob->license);
        ++stdno;
    }
    void getdata()
    {
        cout<<"\n\nEnter : name,roll,class,div,dob,bg,contact,phone,license\n\n\n";
        cin>>name>>roll>>eclass>>div>>dob>>bg>>contact>>phone>>license;
    }
    friend void display(db d);
    ~db()
    {
        cout<<"\n\n"<<this->name<<"object is destroyed";
    }
};
void display(db d)
{
    cout<<"\n"<<setw(12)<<d.name<<setw(5)<<d.roll<<setw(4)<<d.eclass<<setw(3)<<d.div<<setw(12)<<d.dob<<setw(4)<<d.bg
<<setw(12)<<d.contact<<setw(12)<<d.phone<<setw(12)<<d.license;
}
int db::stdno;
int main()
{
    int n,i;
    db d1,*ptr[5];
    cout<<"\nDefault values";
    display(d1);

    d1.getdata();
    display(d1);

    db d2(&d1);
    cout<<"\nUse of copy constructor \n";
    display(d2);

    cout<<"\nHow many objects you want to create?";
    cin>>n;

    for(i=0;i<n;i++)
    {
        ptr[i]=new db();
        ptr[i]->getdata();

    }
    cout<<"\n"<<setw(12)<<"name"<<setw(5)<<"roll"<<setw(4)<<"class"<<setw(3)<<"div"<<setw(12)<<"dob"<<setw(4)<<"bg"<<setw(12)<<"contact"<<setw(12)<<"phone"<<setw(12)<<"license";
    for(i=0;i<n;i++)
    {
        display(*ptr[i]);
    }
    db::count();
    for(i=0;i<n;i++)
    {
        delete(ptr[i]);
    }
    cout<<"objects deleted";
    return 0;
}