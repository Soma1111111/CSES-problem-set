#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main() {
    int a;
    cin>>a;
    vector<int>vec;
    vector<int>vec1;
    vector<int>vec2;
    for(int i=0;i<a;i++){
        vec.push_back(i+1);
    } 
    if(a<=3 and a>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else if(a==1){
        cout<<1<<endl;
    }
    else{
        for(int i=0;i<vec.size();i+=2){
            vec1.push_back(vec[i]);
        }
        for(int i=1;i<vec.size();i+=2){
            vec2.push_back(vec[i]);
        }
    }
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" "; 
    }
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" "; 
    }
    return 0;
}