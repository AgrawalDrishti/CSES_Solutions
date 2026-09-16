#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long n , x;
    cin>>n>>x;

    vector<long long> w;

    for(long long i = 0 ; i<n ; i++){
        long long a;
        cin>>a;
        w.push_back(a);
    }

    sort(w.begin() , w.end());

    if(n == 1){
        cout<<1<<endl;
        return 0;
    }

    long long l = 0;
    long long r = n-1;
    long long ans = 0;

    while(l<=r){

        if(w[l] + w[r] <= x){
            ans += 1;
            l ++;
            r --;
        }else{
            ans += 1;
            r --;
        }
    }

    cout<<ans<<endl;
    return 0;
}