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
    int pos[m]; // size = size(pos[]) = m
    for(int i = 0; i < m; i++)
    {
        cin >> pos[i];
    }

    int index_pos = 0;
    int index_arr = 0;
    for (int i = 0 ; i < n; i++) {
        if (i + 1 == pos[index_pos] - index_pos) {
            for (int j = i; j < n - i; j++) {
                arr[i] = arr[i + 1];
            }
            index_pos++;
        }
        else
            arr[i] = arr[index_arr++];
    }

    n -= m; // updating the final array size
    cout << "resulting array : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
}
