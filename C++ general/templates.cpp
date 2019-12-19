#include <iostream>
using namespace std;

template <class generic>

generic GetMax(generic a, generic b){
    
    return (a > b ? a : b);
}


int main(){
    int i=5, j=6, k;
    long l=10, m=5, n;

    k = GetMax<int>(i,j);
    n = GetMax<int>(l,m);
    cout << k << endl;
    cout << n << endl;
    return 0;
}