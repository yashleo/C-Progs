#include <iostream>
using namespace std;

void pat1(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << j;
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}

void pat2(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << n-j+1;
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}

void pat3(int n){
    int i=1,x=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout << x << " ";
            j+=1;
            x+=1;
        }
        cout << endl;
        i+=1;
    }
}

void pat4(int n){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << "*";
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}

void pat5(int n){
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << row << " ";
            col += 1;
        }
        cout << endl;
        row+=1;
    }
}

void pat6(int n){
    int row = 1;
    while(row <= n){
        int col = 1;
        //int v=row;
        while(col <= row){
            cout << /*v*/  row+col-1 << " ";
            col+=1;
            //v+=1;
        }
        cout << endl;
        row+=1;
    }
}

void pat7(int n){
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A'+row-1;
            cout << ch << " ";
            col+=1;
        }cout << endl;
        row+=1;
    }
}

void pat8(int n){
    int row = 1,x = 0;
    while(row <= n){
        int col = 1;
        while(col <= n){
            char ch = 'A'+x;
            cout<<ch<<" ";
            x+=1;
            col+=1;
        }
        cout << endl;
        row+=1;
    }
}

void pat9(int n){
    int row;
    while(row <= n){
        int col = 1;
        while(col <= n){
            col+=1;
        }
        row += 1;
    }
}

void pat10(int n){
    int row = 1,x = 0;
    while(row <= n){
        int col = 1;
        char ch = 'A'+ n - row;
        while(col <= row){
            cout<<ch<<" ";
            ch+=1;
            col+=1;
        }
        cout << endl;
        row+=1;
    }
}

int main(){
    int n;
    cin >> n;
    // pat1(n);
    // pat2(n);
    // pat3(n);
    // pat4(n);
    // pat5(n);
    // pat6(n);
    // pat7(n);
    // pat8(n);
    // pat9(n);
    pat10(n);
}