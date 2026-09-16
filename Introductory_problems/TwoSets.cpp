#include<iostream>
#include<vector>

using namespace std;

int main(){
    long long n;
    cin>>n;

    vector<long long>v1;
    vector<long long>v2;
    vector<long long>vis(n+1 , 0);

    long long total_sum = ((n+1)*(n))/2;
    long long max_ele = n;
    long long sum_v1 = 0;

    if(total_sum % 2 != 0){
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"YES"<<endl;

    while(total_sum/2 > sum_v1){

        long long rem_sum = total_sum/2 - sum_v1;

        if(rem_sum > max_ele){
            v1.push_back(max_ele);
            sum_v1 += max_ele;
            vis[max_ele] = 1;
            max_ele --;
        }else{
            v1.push_back(rem_sum);
            sum_v1 += rem_sum;
            vis[rem_sum] = 1;
        }
    }

    for(long long i = 1 ; i <= n ; i++){
        if(vis[i] == 0) v2.push_back(i);
    }

    cout<<v1.size()<<endl;

    for(long long i = 0 ; i<v1.size() ; i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<v2.size()<<endl;

    for(long long i = 0 ; i<v2.size() ; i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    return 0;

}