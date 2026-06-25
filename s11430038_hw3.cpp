//11430038林豪安
#include <iostream>
using namespace std;
double fun(double n);
double fun2(double n);
double fun3(double x,double n);
double fun4(double n,double k);

int main()
{
    double n,x,k;
    cin>>x>>n>>k;
    cout<<fun(n)<<endl;
    cout<<fun2(n)<<endl;
    cout<<fun3(x,n)<<endl;
    cout<<fun4(n,k)<<endl;
    return 0;
}
double fun(double n)
{
    double a=0;
    for(int i=1; i<=n; i++)
    {
        a=a+i*i;
    }
    return a;
}
double fun2(double n)
{
    double b=1;
    double c;
    for(int i=1; i<=n; i++)
    {
        c=2*i-1;
        b=b*c;
    }
    return b;
}
double fun3(double x,double n)
{
    double d=1;
    double e=0;
    for(int i=1; i<=n; i++)
    {
        d=d*x;
        e=e+d/i;
    }
    return e;
}
double fun4(double n,double k)
{
    double a1=1;
    double b1=1;
    double c1=1;
    for(int i=1; i<=n; i++)
    {
        a1=a1*i;
    }
    for(int i=1; i<=k; i++)
    {
        b1=b1*i;
    }
    for(int i=1; i<=n-k; i++)
    {
        c1=c1*i;
    }
    return a1/(b1*c1);
}