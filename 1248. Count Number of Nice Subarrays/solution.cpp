#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        // cout << i;
        for (int j = i; j <= 2; j++) {
            i = j;
            cout << j;
        }
    }
    return 0;
}