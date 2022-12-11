#include<iostream>

using namespace std;

int main() {
    int luong, gioLam, thuong, phat;
    cin >> luong >> gioLam >> thuong >> phat;
    int thucLing = gioLam * luong + thuong - phat;
    cout << thucLing << endl;
    return 0;
}