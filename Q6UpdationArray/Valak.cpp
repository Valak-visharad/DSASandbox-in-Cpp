#include <iostream>
using namespace std; 

int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int elem[m]; // size = size(pos[]) = m
    for(int i = 0; i < m; i++)
    {
        cin >> elem[i];
    }

    int pos[m]; //size = m
    for(int i = 0; i < m; i++)
    {
        cin >> pos[i];
    }
    
    for (int i = 0 ; i < m; i++) {
        arr[pos[i] - 1] = elem[pos[i] - 1];
        cout << "\n";
    }

    cout << "resulting array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    return 0;
}


