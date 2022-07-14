#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<endl<<"Enter the Angle A: ";
    cin>>a;
    cout<<endl<<"Enter the Angle B: ";
    cin>>b;
    cout<<endl<<"Enter the Angle C: ";
    cin>>c;

    if(a+b+c==180)
    {
        cout<<endl<<"Triangle is Possible";
    }
    else
    {
        cout<<endl<<"Triangle is not Possible";
    }
    

}