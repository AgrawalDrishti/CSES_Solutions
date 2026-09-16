#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){
    long long n ,c;
    cin>>n>>c;

    multiset<long long> ms;
    vector<long long> prices;

    for(long long i = 0 ; i<n ; i++){
        long long a ;
        cin>>a;
        ms.insert(a);
    }

    for(long long i = 0 ; i<c ; i++){
        long long a;
        cin>>a;
        prices.push_back(a);
    }

    for(long long i = 0 ; i<c ; i++){
        long long temp = prices[i];

        auto it = ms.upper_bound(temp);

        if(it == ms.begin()){
            cout<<-1<<endl;
        }
        else{
            it--;
            long long val = *it;
            cout<<val<<endl;
            ms.erase(it);
        }
    }

    return 0;
}