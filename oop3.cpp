#include<iostream>
using namespace std;
class publication{
    private:
    string title;
    float price;
    public:
    void getdata()
    {
        cout<<"Enter the title: ";
        cin>>title;
        cout<<"Enter the price: ";
        cin>>price;
    }
    void putdata()
    {
        cout<<"Title : "<<title<<endl;
        cout<<"Price : "<<price<<endl;
    }
    
};
class book:public publication
{
    private:
    int pagecount;
    public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter the pagecount: ";
        cin>>pagecount;

    }
        
    void putdata()
    {
        publication::putdata();
        cout<<"Page Count : "<<pagecount<<endl;
    }
};
class tape:public publication{
    float playtime;
    public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter the playtime in minutes ";
        cin>>playtime;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Playtime(in minutes) : "<<playtime<<" min"<<endl;

    }
};
int main()
{
    book b;
    tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();
    return 0;
}
