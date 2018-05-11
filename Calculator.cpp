#include<bits/stdc++.h>
using namespace std;

void Pow(int a,int b)
{
    int c;
    c = pow(a,b);
    cout<<"The result is: "<<c<<endl;
}

void Mul(int a,int b)
{
    int c = a*b;
    cout<<"The result is: "<<c<<endl;
}

void Add(int a,int b)
{
    int c = a+b;
    cout<<"The result is: "<<c<<endl;
}

void Div(int a,int b)
{
    int c=a/b;
    cout<<"The result is: "<<c<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;
    Add(a,b);
    Sub(a,b);
    Mul(a,b);
    Div(a,b);
    Pow(a,b);

    return 0;
}
