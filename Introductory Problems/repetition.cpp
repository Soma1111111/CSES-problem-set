#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main() {
    string s;
    cin>>s;
    int c=1;
    // int cnt1=0;
    vector<int>vec;
    vector<int>vec1(s.length());
    vec1.push_back(c);
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            c++;
            vec1.push_back(c);
        }
        else{
            c=1;
        }
    }
    cout<<*max_element(vec1.begin(),vec1.end())<<endl;
}