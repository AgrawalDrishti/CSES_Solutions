#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long n;
    cin>>n;

    if(n == 1){
        cout<<1<<endl;
        return 0;
    }

    if(n == 2 || n == 3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    if(n == 4){
        cout << 2 <<" "<<4<<" "<<1<<" "<<3<<endl;
        return 0;
    }

    vector<long long> a(n);
    long long start = 1;
    for(long long i = 0 ; i<n ; i++){
        if(i%2 == 0){
            a[i] = start;
            start++;
        }
    }

    if(n%2 == 0){
        start = n/2 + 1;
    }else{
        start = n/2 + 2;
    }

    for(long long i = 0 ; i<n ; i++){
        if(i%2 != 0){
            a[i] = start;
            start++;
        }
    }

    for(long long i = 0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}