#include<iostream>

using namespace std;

int main() {
    int a ,b;
    cin >> a >> b;
    int c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}