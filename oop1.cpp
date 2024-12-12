#include<iostream>
using namespace std;
class complex{
    float real, imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex operator+(complex&);
    complex operator*(complex&);
    complex(float,float);
    friend istream &operator>>(istream &,complex &);
    friend ostream &operator<<(ostream &,complex &);
};
complex::complex( float x, float y)
{
    real=x;
    imag=y;
}
istream &operator>>(istream &din,complex &c)
{
    cout<<"enter the real part of complex number 2 : ";
    din>>c.real;
    cout<<"enter the imag part of the complex number 2 : ";
    din>>c.imag;
    return din;
}
ostream &operator<<(ostream &dout,complex &c)
{
    dout<<c.real<<"+"<<c.imag<<"i";
    dout<<endl;
    return dout;
}
complex complex::operator+(complex &c)
{
    complex temp;
    temp.real = real+c.real;
    temp.imag = imag+c.imag;
    return temp;
}
complex complex::operator*(complex &c)
{
    complex mul;
    mul.real=(real*c.real);
    mul.imag=(imag*c.imag);
    return mul;
}
int main()
{
    complex c2,c3;
    complex c1(1.2,2.2);
    cout<<"complex number 1 is : "<<c1<<endl;
    cout<<"enter the complex no2 : "<<endl;
    cin>>c2;
    cout<<"complex no1 is : "<<c1<<endl;
    cout<<"complex no2 is : "<<c2<<endl;
    cout<<"Addition of two complex number is : ";
    c3=c1+c2;
    cout<<c3;
    cout<<"multiplication of two complex number is : ";
    c3=c1*c2;
    cout<<c3;
    return 0;

}
