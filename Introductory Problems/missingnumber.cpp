#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int h;
    cin>>h;
    vector<int>vec;
    vector<int>vec1;
    for(int i=0;i<(h-1);i++){
        int j;
        cin>>j;
        vec.push_back(j);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        if(vec[i]!=(i+1)){
            cout<<(i+1)<<endl;
            return 0;
        }
    }
    cout<<h<<endl;
    // return 0;
}