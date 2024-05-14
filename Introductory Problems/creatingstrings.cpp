#include<bits/stdc++.h>
using namespace std;

void createstrings(string &s, int i, int j, set<string> &set1){
    if(i==j){
        set1.insert(s);
    }
    else{
        for(int k=i;k<j;k++){
            swap(s[i],s[k]);
            createstrings(s,i+1,j,set1); 
            swap(s[k],s[i]); //backtracking
        }
    }
}

int main(){
    string s;
    cin>>s;
    int n = s.size();
    set<string> s1; 
    createstrings(s,0,n,s1); 
    cout<<s1.size()<<endl;
    for(auto i:s1){
        cout<<i<<endl;
    }
}