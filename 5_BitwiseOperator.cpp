/*
AND -> &
OR -> |
NOT -> ~
XOR -> ^
*/

#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 6;

    cout << " a&b: " << (a & b) << endl;
    cout << " a|b: " << (a|b) << endl;
    cout << " ~a:  " << ~a << endl;
    cout << " a^b:  " << (a^b) << endl;
    cout << " a << b:  " << (a << b) << endl;
    cout << " a >> b:  " << (a >> b) << endl;

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 10) << endl;
    cout << (17 >> 3) << endl;
    cout << (20 >> 7) << endl;
}