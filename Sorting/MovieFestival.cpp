#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
    long long n;
    cin>>n;

    vector<pair<int, int>> v;
    for(long long i = 0 ; i<n ; i++){
        long long st, end;
        cin>>st>>end;
        v.push_back({end, st});
    }

    sort(v.begin() , v.end());

    long long time_elapsed = 0;
    long long maxi = 0;

    for(long i = 0 ; i<n ; i++){
        if(v[i].second >= time_elapsed){
            maxi ++;
            time_elapsed = v[i].first;
        }
    }

    cout<<maxi<<endl;
    return 0;

}