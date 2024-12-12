#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string state;
    float population;
    char ans='y';
    int choice;
    map<string,int>m;
    map<string,int>::iterator it;
    do
    {
        cout<<"\nMain Menu";
        cout<<"\n1.Insert an element ";
        cout<<"\n2.Display ";
        cout<<"\n3.Search a state ";

        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {

        case 1:cout<<"\nEnter the name of the state : ";
        cin>>state;
        cout<<"\nEnter the population of the state(in Cr) : ";
        cin>>population;
        m.insert(pair<string,int>(state,population));
        break;
        case 2:
        for(it=m.begin();it!=m.end();it++)
        {
             cout<<"State : "<<(*it).first<<" "<<"Population : "<<(*it).second<<"Cr"<<endl;
        }
        break;
        case 3:
        cout<<"Enter the name of the state whose population is to be searched : ";
        cin>>state;
        if(m.count(state)!=0)
        {
            cout<<"Population of is "<<m.find(state)->second<<"Cr"<<endl;
        }
        else
        {
            cout<<"State is not present "<<endl;
        }
        break;
        }
        cout<<"Do you want to move to main menu (y/n) : ";
    cin>>ans ;


    }
    
    while (ans=='y');
    return 0;
    
}
