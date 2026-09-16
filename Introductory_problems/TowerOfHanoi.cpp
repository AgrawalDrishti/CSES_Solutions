#include<iostream>
#include<cmath>

using namespace std;

// from , to , helper
// a , c , b
void towerOfHanoi(int n , int a , int b , int c){
    if(n == 0 ) return;

    towerOfHanoi(n-1 , a , c , b );
    cout<<a<<" "<<c<<endl;
    towerOfHanoi(n-1 , b , a , c);
}

int main(){
    int n;
    cin>>n;

    cout << (1LL << n) - 1 << endl;
    towerOfHanoi(n , 1 , 2 , 3);
    return 0;
}