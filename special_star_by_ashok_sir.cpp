/*
       1
     1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1
   1 2 3 2 1
     1 2 1
       1
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n : ";
    cin>>n;
    int i = 1;
    while (i != 0)
    {
        int j = 1;
        for (int k = 0; k < 2 * (n - abs(i)); k++)
            cout<<" ";
        while (j != 0)
        {
            //cout << "* ";
            cout<<abs(j)<<" ";
            if (j == abs(i))
                j = -j;
            j++;
        }
        cout<<"\n";
        if (i == n)
            i = -i;
        i++;
    }
    return 0; 
}
