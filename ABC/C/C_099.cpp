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
typedef unsigned int uint;
using namespace std;

int dfs(int N){
  if(N<6) return N;

  int beki9 = 1;
  int beki6 = 1;
  while(beki9<=N) beki9 *= 9;
  while(beki6<=N) beki6 *= 6;
  beki9 /= 9;
  beki6 /= 6;
  int tmp1 = dfs(N-beki9) + 1;
  int tmp2 = dfs(N-beki6) + 1;
  return min(tmp1,tmp2);
}

int main(){
  int N;
  cin >> N;
  cout << dfs(N) << endl;
  return 0;
}
