#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include <set>
#include <map>
typedef long long ll;
using namespace std;

int cnt(int n, int k){
  int ans = 0;
  while(n < k){
    ans ++;
    n *= 2;
  }
  return ans;
}

int main(){
  int N, K;
  cin >> N >> K;

  double ans = 0;
  for(int i = 1; i <= N; i++){
    ans += 1 / (double)N * pow(0.5, cnt(i, K));
  }

  printf("%.10lf\n", ans);
  return 0;

}
