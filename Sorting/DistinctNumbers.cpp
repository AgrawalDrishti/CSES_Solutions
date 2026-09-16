#include<iostream>
#include<map>

using namespace std;

int main(){
    long long n;
    cin>>n;

    map<long long , long long> mp;

    for(long long i = 0 ; i<n ; i++){
        long long t;
        cin>>t;
        mp[t] ++;
    }

    cout<<mp.size()<<endl;
}