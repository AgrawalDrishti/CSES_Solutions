#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long n , m , k;
    cin>>n>>m>>k;

    vector<long long> desired_size;
    vector<long long> apartment_size;

    for(long long i = 0 ; i<n ; i++){
        long long a;
        cin>>a;
        desired_size.push_back(a);
    }

    for(long long i = 0 ; i<m ; i++){
        long long a;
        cin>>a;
        apartment_size.push_back(a);
    }

    sort(desired_size.begin() , desired_size.end());
    sort(apartment_size.begin() , apartment_size.end());

    long long ans = 0 , ptr1 = 0 , ptr2 = 0;

    while(ptr1 < n and ptr2 < m){
        if(abs(desired_size[ptr1] - apartment_size[ptr2]) <= k){
            ans ++;
            ptr1 ++;
            ptr2 ++;
        }
        else{
            if(desired_size[ptr1] > apartment_size[ptr2]){
                ptr2 ++;
            }else{
                ptr1 ++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}