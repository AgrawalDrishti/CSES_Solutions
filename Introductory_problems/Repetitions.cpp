#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    int maxi = 1;
    int len = 1;
    char prev = s[0];

    for(int i = 1 ; i<s.size() ; i++){
        if(s[i] == prev){
            len ++;
        }
        else{
            prev = s[i];
            len = 1;
        }

        maxi = max(maxi, len);
    }

    cout<<maxi<<endl;
    return 0;
}