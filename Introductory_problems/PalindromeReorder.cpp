#include<iostream>
#include<map>

using namespace std;

int main(){
    string s;
    cin>>s;

    map<char, int> mp;

    for(int i = 0 ; i<s.size() ; i++){
        mp[s[i]] ++;
    }

    int odd_counts = 0;
    char odd_char;
    int odd_size = 0;

    for(auto it : mp){
        if(it.second%2 != 0){
            odd_counts++;
            odd_char = it.first;
            odd_size = it.second;
        } 
    }

    if(odd_counts > 1){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    string ans = "";

    for(auto it : mp){
        if(it.second %2 == 0){
            int count_it = (it.second)/2;

            for(int i = 0; i<count_it ; i++){
                ans += it.first;
            }

            mp[it.first]-= count_it; 
        }    
    }

    int ans_size = ans.size();
    string temp_ans = ans;

    for(int i = 0 ; i<odd_size ; i++){
        ans += odd_char;
    }

    for(int i = ans_size-1 ; i>=0 ; i--){
        ans += temp_ans[i];
    }

    cout<<ans<<endl;

}