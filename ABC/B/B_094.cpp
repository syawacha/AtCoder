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

int main(){
  int N,M,X;
  cin >> N >> M >> X;
  int cost[N+1] = {};
  for(int i=0;i<M;i++){
    int a;
    cin >> a;
    cost[a] = 1;
  }

  int sum[N+2];
  sum[0] = 0;
  for(int i=1;i<=N+1;i++){
    sum[i] = sum[i-1] + cost[i-1];
  }

  cout << min(sum[N+1]-sum[X+1] , sum[X]-sum[0]) << endl;
  return 0;
}
