#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() {
    std::cout << std::setiosflags(std::ios_base::fixed) << std::setprecision(0);
    int s;
    cin>>s;
    if(s==1 || s==2){
        cout<<"NO"<<endl;
    }
    if(s==3){
        // cout<<1<<" "<<2<<" "<<3<<endl;
        cout<<"YES"<<endl;
        cout<<1<<endl;
        cout<<3<<endl;
        cout<<2<<endl;
        cout<<2<<" "<<1<<endl;
    }
    if(s>3){
        if(s%4==0){
            cout<<"YES"<<endl;
            cout<<s/2<<endl;
            for(int i=1;i<=s;i+=4){
                if(i+1>s){
                    break;
                }
                cout<<i<<" "<<i+3<<" ";
            }
            cout<<endl;
            cout<<s/2<<endl;
            for(int i=2;i<=s;i+=4){
                if(i+1>s){
                    break;
                }
                cout<<i<<" "<<i+1<<" ";
            }
            cout<<endl;
        }
        else if((s-3)%4!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<(s/2)+1<<endl;
            if(s>3){
                cout<<1<<" "<<2<<" ";
                for(int i=4;i<=s;i+=4){
                    if(i+3>s){
                        break;
                    }
                    cout<<i<<" "<<i+3<<" ";
                }
            }
            cout<<endl;
            cout<<(s/2)<<endl;
            cout<<3<<" ";
            if(s>3){
                for(int i=5;i<=s;i+=4){
                    if(i+1>s){
                        break;
                    }
                    cout<<i<<" "<<i+1<<" ";
                }
            }
            cout<<endl;
        }
    }
}