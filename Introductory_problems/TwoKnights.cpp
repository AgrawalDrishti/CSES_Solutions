#include<iostream>

using namespace std;

int main(){
    long long k;
    cin>>k;
    for(long long i = 1 ; i<=k ; i++){
        long long n = i*i;
        long long total = n*(n-1)/2 ;
        long long attack = (i-1)*(i-2);
        long long ans = total - 4*attack;

        cout<<ans<<endl;
    }
    return 0;
}