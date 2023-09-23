//Fibonacci series 
#include<iostream>
using namespace std;
void fibo(int n)
{
    long int x = 0, y = 1;
    for (int i = 1; i < n; i++)
    {
        if (i == 1)
            cout<<x;
        else if (i == 2)
            cout<<y;
        else
        {
            cout<<x + y;
            y += x;
            x = y - x;
        }
        cout<<", ";
    }
}
int main()
{
    int n;
    cout<<"Fibonacci series\nAuthor : vilakshan, 2213256";
    cout<<"\nHow many terms you want to print : ";
    cin>>n;
    fibo(n);
    return 0;
}
