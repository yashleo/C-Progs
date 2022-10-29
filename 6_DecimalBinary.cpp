#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    int ans;
    while(n != 0){
        int digit = n % 10;
        ans = (digit * pow(10,i)) + ans;
        n = n >> i;
        i++;
    }
    cout << "Amswer is: " << ans << endl;
}
