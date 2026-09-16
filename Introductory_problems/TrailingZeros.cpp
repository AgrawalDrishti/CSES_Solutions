#include<iostream>
#include<vector>

using namespace std;

int main(){

    long long n;
    cin>>n;

    long long zeros = 0;

    for(long long p = 5; p<=n ; p *= 5){
        zeros += (n/p);
    }

    cout<<zeros<<endl;
    return 0;
}