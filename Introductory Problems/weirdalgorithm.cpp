#include <bits/stdc++.h>
using namespace std;
#define int long long 
signed main() {
    int a;
    cin >> a;
    vector<int> vec;
    vec.push_back(a);
    while (vec.back() != 1) {
        if (vec.back() % 2 == 0) {
            vec.push_back(vec.back() / 2);
        } else {
            vec.push_back(3 * vec.back() + 1);
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}
