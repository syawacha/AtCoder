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
  int N;
  cin >> N;
  int p[N+1];
  for(int i=1;i<=N;i++) cin >> p[i];

  int cnt = 0;
  for(int i=1;i<=N;i++){
    if(i == N && i== p[i]){
      int tmp = p[i];
      p[i] = p[i-1];
      p[i-1] = tmp;
      cnt++;
    }
    if(i == p[i]){
      int tmp = p[i];
      p[i] = p[i+1];
      p[i+1] = tmp;
      cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}
