#include<iostream>

using namespace std;

int main()
{
    int n1,n2,temp;
    cout<<"Enter first number : ";
    cin>>n1;

    cout<<"Enter second number : ";
    cin>>n2;

    cout<<"Before swaping \n"<<"n1 = "<<n1<<"\nn2 = "<<n2;

    temp = n1;
    n1 = n2;
    n2 = temp;

    cout<<"\nAfter swaping \n"<<"n1 = "<<n1<<"\nn2 = "<<n2;

    return 0;
}
