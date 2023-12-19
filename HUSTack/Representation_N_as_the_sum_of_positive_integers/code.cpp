#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
  int N;
  cin >> N;
  vector<int> dp(N + 1);
  dp[0] = 1;
  for (int i = 1; i <= N; i++) {
    for (int j = i; j <= N; j++) {
      dp[j] = (dp[j] + dp[j - i]) % MOD;
    }
  }
  cout << dp[N] << endl;
  return 0;
}
