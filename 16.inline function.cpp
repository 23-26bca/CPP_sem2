#include<iostream.h>
#include<conio.h>
inline float mul(float x,float y)
{
    return(x*y);
}

inline float div(float x,float y)
{
    return(x/y);
}

int main()
{
    float a,b;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    cout<<"Multipilaction is :"<< mul(a,b)<<endl;
    cout<<"Division is :"<< div(a,b)<<endl;
    return 0;
}
