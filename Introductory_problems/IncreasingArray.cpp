#include<iostream>
#include<vector>
using namespace std;

int main(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i = 0 ; i<n ; i++){
        cin>>a[i];
    }

    long long min_moves = 0;

    for(long long i = 1 ; i<n ; i++){
        if(a[i] < a[i-1]){
            min_moves += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout<<min_moves<<endl;
    return 0;
}