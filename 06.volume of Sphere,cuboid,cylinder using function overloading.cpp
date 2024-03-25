// Write a program to find the vloume of sphere,cuboid and cylinder using Function Overloading in C++

#include<iostream.h>
#include<conio.h>
include<stdlib.h>
#define pi=3.14

class func
{
  public:
          void volume(float,int);//sphere
          void volume(int,int,int);//cuboid
          void volume(int,int);//cylinder
};

void func::volume(float,int)
{
cout<<Volume of Sphere : "<<4/3.0(pi*a*a*a)<<endl;
}

void func::volume(int a,int b,int h)
{
cout<<Volume of Cuboid : "<<a*b*h<<endl;
}

void func::volume(int a,int b)
{
cout<<Volume of Cylinder : "<<pi*a*a*b<<endl;
}


void main()
{
  int a,b,h,ch
  clrscr();

  func obj; //creating object
  cout<<"Function Overloading"<<endl;
  cout<<"1.Volume of Sphere \n  2. Volume of Cuboid \n  3.Volume of Cylinder \n \n Enter your Choice:"<<endl;
  cin>>ch;
  switch(ch)
  {
    case '1' :
              cout<<"Enter the Radius of Sphere:"<<endl;
              cin>>a;
              obj.volume(1.33,a);
              break;
    case '2' :
              cout<<"Enter the Length,Breadth and Height of Cuboid:"<<endl;
              cin>>a>>b>>h;
              obj.volume(a,b,h);
              break;

   case '3' :
              cout<<"Enter the Radius and Height of Cylinder:"<<endl;
              cin>>a>>b;
              obj.volume(a,b);
              break;

    case '4' :
              exit(0);
  }
  getch();
}
