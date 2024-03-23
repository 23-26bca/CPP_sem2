#include<iostream.h>
#include<conio.h>
class complex
{
    float real,imaginary;
    public:
        void getnumber(float r,float float i)
        {
            real=r;
            imaginary=i;
        }

        void printnumber()
        {
            cout<<real<<"+"<<imaginary<<endl;
        }

        friend complex sum(complex,complex);
};

complex sum(complex obj1,complex obj2)
{
    complex obj3;
    obj3.real=obj1.real+obj2.real;
    obj3.imaginary=obj1.imaginary+obj2.imaginary;
    return(obj3);
}

void main()
{
    complex c1,c2,c3;
    float r,i;
    cout<<"Enter 1st Complex number: /n both real and imaginary"<<endl;
    cin>>r>>i;
    c1.getnumber(r,i);
    cout<<"Enter 2nd Complex number: /n both real and imaginary"<<endl;
    cin>>r>>i;
    c2.getnumber(r,i);
    c3=sum(c1,c2);
    cout<<"First Complex Number: "<<c1.printnumber()<<endl;
    cout<<"Second Complex Number: "<<c2.printnumber()<<endl;
    cout<<"Sum of Complex Number: "<<c3.printnumber()<<endl;
    getch();
}