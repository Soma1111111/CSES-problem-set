#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() {
    std::cout << std::setiosflags(std::ios_base::fixed) << std::setprecision(0);
    int s;
    cin>>s;
    cout<<0<<endl;
    for(int i=2;i<=s;i++){
        int k=pow(i,2);
        cout<<((k*(k-1))/2)-(pow(2*i-3,2)-1)<<endl;
    }
}