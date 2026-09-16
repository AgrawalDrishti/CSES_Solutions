#include<iostream>

using namespace std;

int main(){

    long long t;
    if(!(cin>>t)) return 0;

    for(long long i = 0 ; i<t ; i++){
        long long x, y;
        cin>>x>>y;

        long long ans;
        if(y>x){
            if(y%2 != 0){
                ans = (y*y - x + 1);
            }else{
                ans = (y-1)*(y-1) + x;
            }
        }
        else{
            if(x%2 != 0){
                ans = (x-1)*(x-1) + y;
            }
            else{
                ans = (x*x)-y+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}