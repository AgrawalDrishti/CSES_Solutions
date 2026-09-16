#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    long long n;
    cin>>n;

    vector<long long> arr;
    vector<long long> dept;

    for(long long i = 0 ; i<n ; i++){
        long long a , b;
        cin>>a>>b;

        arr.push_back(a);
        dept.push_back(b);
    }

    sort(arr.begin() , arr.end());
    sort(dept.begin() , dept.end());

    long long i, j;
    i = 0; 
    j = 0;

    long long maxi = 0;
    long long curr = 0;

    while(i<n && j<n){
        if(arr[i] < dept[j]){
            i++;
            curr ++;
            maxi = max(maxi, curr);
        }
        else{
            curr --;
            j ++;
        }
    }

    cout<<maxi<<endl;
    return 0;
}