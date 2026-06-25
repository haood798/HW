//11430038林豪安
#include<iostream>
using namespace std;
void arrea(float num[]);
void sort(float num[]);
void sort2(float num[]);

int main()
{
    float num[10];
    cout<<"請輸入數字"<<endl;
    arrea(num);
    sort(num);
    for(int i=0; i<10; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    sort2(num);
    for(int i=0; i<10; i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}

void arrea(float num[])
{
    for(int i=0; i<10; i++)
    {
        cin>>num[i];
    }
}
void sort(float num[])
{
    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(num[i]>num[j])
            {
                float a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
}
void sort2(float num[])
{
    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(num[i]<num[j])
            {
                float a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
}