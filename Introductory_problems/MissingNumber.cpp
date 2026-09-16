#include<iostream>
#include <map>
using namespace std;

int main(){
    long long n;
    cin>>n;

    map<long long, int> m;

    for(long long i = 1 ; i<=n ; i++){
        m[i] = 0;
    }
    

    for(long long i = 0 ; i<n-1 ; i++){
        long long x;
        cin>>x;

        m[x] = 1;

    }

    for(long long i = 1 ; i<=n ; i++){
        if(m[i] == 0){
            cout<<i<<endl;
            return 0;
        }
    }
    
    return 0;

}