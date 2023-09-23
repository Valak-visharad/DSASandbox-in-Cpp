#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    // int elem[100];
    // int pos[100];
    int len;
    int num;
    cin>>len;
    for(int i=1;i<=len;i++)
    {
        cin>>arr[i];
    }
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

    int tmp = 0;
    for(int i = 0; i < num; i++)
    {
        tmp = arr[pos[i]];       // always 
        arr[pos[i] + 1] = arr[pos[i]];    // only once
        for(int k = pos[i]; k < len; k++)
        {
            arr[k + 1] = tmp;       // just not the first time
        }
        arr[pos[i]]=elem[i];
    }
    for (int i=0;i<=len;i++) {
        cout << arr[i] << ", ";
    }
}