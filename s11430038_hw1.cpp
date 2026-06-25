#include<iostream>
#include<iomanip>
using namespace std;

int func(int n);
float func2(int n);
int func3(int n);
void PrintNumber(int x,int y);

int main()
{
    cout<<"func(10)="<<func(10)<<endl;
    cout<<"func(20)="<<func(20)<<endl;
    cout<<"func(30)="<<func(30)<<endl;
    cout<<"func2(10)="<<fixed<<setprecision(2)<<func2(10)<<endl;
    PrintNumber(5,10);
    return 0;
}
int func(int n)
{
    int a;
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        a=i*2;
        sum=sum+a;
    }
    return sum;
}
float func2(int n)
{
    int a;
    float b=1;
    float sum=0;
    for(int i=1; i<=n; i++)
    {
        a=2;
        b=b*a;
        sum=sum+1/b;
    }
    return sum;
}
void PrintNumber(int x,int y)
{
    for(int i=x; i<=y; i++)
    {
        cout<<i<<endl;
    }
}