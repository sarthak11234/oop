#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
typedef struct rec
{
    char name[20];
    char birthdate[20];
    char phone[20];

}node;
node temp;
vector<node>rec;
vector<node>::iterator ptr;

bool compare(node &r1,node &r2)
{
    if(strcmp(r1.name,r2.name)<0)
    {
        return true;

    }
    else
    return false;

}
void create()
{
    int n,i;
    cout<<"\nHow many elements you want to insert?"<<endl;
    cin>>n;
    cout<<"Enter the number of elements in the database"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\n name : ";
        cin>>temp.name;
        cout<<"\n Birth date : ";
        cin>>temp.birthdate;
        cout<<"\n Phone : ";
        cin>>temp.phone;
        rec.push_back(temp);
    }
}
void display()
{
    cout<<"\n\tthe contents of the database are : ";
    cout<<"\n--------------------------------------";
    cout<<"\n Name     Birth Date      Phone";
    cout<<"\n--------------------------------------";
    for(ptr=rec.begin();ptr!=rec.end();ptr++)
    {
        cout<<"\n";
        cout<<"  "<<(*ptr).name;
        cout<<"       "<<(*ptr).birthdate;
        cout<<"             "<<(*ptr).phone;
    }
}
void searching()
{
    char key[20];
    int flag=0;
    cout<<"\n Enter the name which you want to search : ";
    cin>>key;
    for(ptr=rec.begin();ptr!=rec.end();ptr++)
    {
        if(strcmp((*ptr).name,key)==0)
        {
            flag=1;
            break;

        }
        else
        flag=0;
    }
    if(flag==1)
    {
        cout<<"\n The desired element is present in the database";
        
    }
    else
    {
        cout<<"\n The desired element is not present in the database";

    }
}
void sorting()
{
    sort(rec.begin(),rec.end(),compare);
    cout<<"\n\n Record is Sorted !!!"<<endl;
}
int main()
{
    char ans ='y';
    int choice;
    cout<<"program fro searching and sorting ";
    do{
        cout<<"\n Main Menu ";
        cout<<"\n 1.Create the database";
        cout<<"\n 2.Display the database";
        cout<<"\n 3.Search particular element ";
        cout<<"\n 4.Sort the database(based on the name)";
        cout<<"\n Enter your choice :";
        cin>>choice;
        switch(choice)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:searching();
            break;
            case 4:sorting();
            break;
        }
        cout<<"\nDo you want to go back to main menu?";
        cin>>ans;
    }
    while(ans=='y');
    return 0;
}