/*
Convert any x base number to any other n base number system
*/
#include<iostream>
using namespace std;
int pow2(int x, int a)
{
    int res = 1;
    for (int i = 0; i < a; i++)
        res *= x;
    return res;
}
int convert(int x, int a, int n)
{
    //code
}
void display(/)
{
    //code
}
int main()
{
    int num, a, n;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"Specify the base of number : ";
    cin>>a;
    cout<<"\nTarget base : ";
    cin>>n;
    int x = convert(num, a, n);
    display(x);
    return 0;
}