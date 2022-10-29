#include <iostream>
using namespace std;

void fib(int n){
    int a=0,b=1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        int z = a+b;
        cout << z << " ";
        a = b;
        b = z;
    }
}

bool primeNo(int n){
    int i;
    for (i = 2; i < n; i++)
    {
        if(n%i == 0){
            i=0;
            break;
        }
    }
    if(i==0){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int n;
    cin >> n;
    // fib(n);
    if(primeNo(n)){
        cout << "It is a Prime Number!!" << endl;
    }
    else{
        cout << "It is Not a Prime Number!!" << endl;
    }
}