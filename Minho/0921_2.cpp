#include <iostream>
using namespace std;
int main() {
    int n;
    int dp[1002];
    dp[1] = 1;
    dp[2] = 3;
    cin >> n;

    if (n >= 3) {
        for (int i = 3; i <= n; i++) {
            dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
        }
    }

    cout << dp[n];
    return 0;
}