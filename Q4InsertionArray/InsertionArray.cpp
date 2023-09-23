#include <iostream>
using namespace std; 

int main() {
    
    int n;
    cin >> n;
    int arr[n]; //input, size = n
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
    

    int result_arr[m + n];

    int index_arr = 0;
    int index_pos = 0;
    for (int i = 0 ; i < m + n; i++){
        if (i + 1 == pos[index_pos]) {
            result_arr[i] = elem[index_pos++];
        }
        else
            result_arr[i] = arr[index_arr++];
    }

    cout << "resulting array : ";
    for (int i = 0; i < m + n; i++)
        cout << result_arr[i] << ", ";
}
