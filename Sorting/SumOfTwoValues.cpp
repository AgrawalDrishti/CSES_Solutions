#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
    long long n , x;
    cin>>n>>x;

    vector<pair<int , int>> v;

    for(long long i = 0 ; i<n ; i++){
        long long a;
        cin>>a;
        v.push_back({a , i});
    }

    sort(v.begin() , v.end());

    long long l = 0;
    long long r = n-1;

    while(l < r){
        if(v[l].first + v[r].first == x){
            cout<<v[l].second+1<<" "<<v[r].second+1<<endl;
            return 0;
        }
        else if(v[l].first + v[r].first > x){
            r --;
        }else{
            l ++;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}