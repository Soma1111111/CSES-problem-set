//A simple way is to calculate floor(n/5). For example, 7! has one 5, 10! has two 5s. But, numbers like 25, 125, etc have more than 5 instead of floor (n / 5). For example, if we consider 28! we get one extra 5 and the number of 0s becomes 6. Handling this is simple, first, divide n by 5 and remove all single 5s, then divide by 25 to remove extra 5s, and so on.
#include<bits/stdc++.h>
using namespace std;

int findTrailingZeros(int n)
{
    if (n < 0){
        return -1;
    }
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;

    return count;
}

// Driver Code
int main()
{
    int n;
    cin>>n;
    cout<<findTrailingZeros(n)<<endl;
    return 0;
}