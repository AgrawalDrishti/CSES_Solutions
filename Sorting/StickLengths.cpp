#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long n; 
    cin>>n;

    vector<long long> arr;

    for(long long i = 0 ; i<n ; i++){
        long long x;
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin() , arr.end());

    long long median = arr[n/2];

    long long ans = 0;

    for(long long i = 0 ; i<n ; i++){
        ans += abs(arr[i] - median);
    }

    cout<<ans<<endl;

    return 0 ;
}