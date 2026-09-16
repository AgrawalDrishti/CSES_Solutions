#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long n;
    cin>>n;

    vector<long long> ans(n+ 1, 0);

    long long mod_val = (1000000007);

    ans[1] = 2;

    for(int i = 2; i<= n ; i++){
        long long val = (2*ans[i-1])%(mod_val);
        ans[i] = val;
    }

    cout<<ans[n]<<endl;

    return 0;

}