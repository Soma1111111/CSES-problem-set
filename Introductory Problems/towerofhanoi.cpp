#include<bits/stdc++.h>
using namespace std;

void changes(int n,vector<vector<int>>&vec,int i,int j,int k){
    if(n==1){
        vec.push_back({i,j});
        return;
    }
    changes(n-1,vec,i,k,j);
    vec.push_back({i,j});
    changes(n-1,vec,k,j,i);
}

void tower(int n){
    vector<vector<int>>vec;
    int i=1,j=2,k=3;
    changes(n,vec,i,k,j);
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout << vec[i][0] << " " << vec[i][1] << endl;
    }
}

int main(){
    int n;
    cin>>n;
    tower(n);
}