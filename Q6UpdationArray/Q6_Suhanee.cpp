#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int len;
    cin>>len;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }

    int num;
    cin>>num;
    int elem[num];
    int pos[num];

    for(int i=0;i<num;i++)
    {
        cin>>elem[i];
    }

    for(int i=0;i<num;i++)
    {
        cin>>pos[i];
    }

    for(int i=0;i<num;i++)
    {
        arr[pos[i]-1]=elem[i];
    }

}
