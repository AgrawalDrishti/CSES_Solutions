#include<iostream>
using namespace std;

int main(){
    long long t;
    cin>>t;

    for(long long i = 0 ; i<t ; i++){
        long long l , r;
        cin>>l>>r;
        if((l + r) % 3 == 0 && 2 * l >= r && 2 * r >= l){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}