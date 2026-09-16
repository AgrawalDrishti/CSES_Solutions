#include<iostream>
#include<vector>

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

    long long maxi = arr[0];
    long long max_end = arr[0];

    for(long long i = 1 ; i<n ; i++){
        max_end = max(arr[i], max_end + arr[i]);
        maxi = max(maxi , max_end);
    }

    cout<<maxi<<endl;
    return 0;
}