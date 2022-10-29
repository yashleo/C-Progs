#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>

using namespace std;
int main(){
    
    //ARRAY ☻

    /* int baisc[3] = {1,2,3};

    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        
        cout << a[i] << endl;
    }
    cout << "Element at 2nd Index: " << a.at(2) << endl;
    cout << a.empty() << endl;
    
    cout << "Last Element --> " << a.back() << endl;
    cout << "First Element --> " << a.front() << endl; */

    // VECTOR ☻

    /* vector<int> v;
    cout << "Size of the Vector initially --> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Size of the Vector initially --> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size of the Vector initially --> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size of the Vector initially --> " << v.capacity() << endl;

    v.push_back(4);
    cout << "Size of the Vector initially --> " << v.capacity() << endl;

    v.push_back(5);
    cout << "Size of the Vector initially --> " << v.capacity() << endl;
    cout << "Above was the Capacity,the size is --> " << v.size() << endl;

    cout << "Before POP: ";
    for(int i: v){
        cout << i << " ";
    }cout << endl;

    v.pop_back();

    cout << "After POP: ";
    for(int i: v){
        cout << i << " ";
    }cout << endl;

    v.clear();
    cout << "Size of Vector After Clear: " << v.size() << endl;
    cout << "Capacity of Vector After Clear: " << v.capacity() << endl; 

    vector<int> a(5,1);
    cout << a.capacity() << endl;

    vector<int> last(a);
    for(int i:last){
        cout << i << " ";
    }cout << endl; */

    // DEQUE ☻

    /* deque<int> d;
    d.push_back(1);
    d.push_back(3);
    d.push_back(5);
    d.push_front(2);
    d.push_front(4);
    d.push_front(6);

    for(int i: d){
        cout << i << " ";
    }cout << endl;

    //d.pop_front();
    for(int i: d){
        cout << i << " ";
    }cout << endl; 

    cout << "Deque Before Erase: " ;
    for(int i: d){
        cout << i << " ";
    }cout << endl;


    d.erase(d.begin(),d.end());
    cout << "Deque After Erase: " ;
    for(int i: d){
        cout << i << "  ";
    }cout << endl; */

    //LIST ☻

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    

}       