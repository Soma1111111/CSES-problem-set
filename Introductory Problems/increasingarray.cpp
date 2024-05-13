#include <iostream>
#include <vector>
using namespace std;
#define int long long

signed main() {
    int a;
    cin >> a;
    vector<int> vec(a);
    for (int i = 0; i < a; i++) {
        cin >> vec[i];
    }  
    int c1 = 0;
    for (int i = 1; i < a; i++) {
        // Calculate the difference between adjacent elements
        int diff = vec[i] - vec[i - 1];
        if (diff < 0) {
            // If the difference is negative, adjust the current element to match the previous one
            vec[i] = vec[i - 1];
            c1 -= diff; // Increment the count by the absolute difference
        }
    }
    cout << c1 << endl;
    return 0;
}
