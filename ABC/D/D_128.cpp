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
  int N,K;
  cin >> N >> K;
  int V[N];
  for(int i=0;i<N;i++) cin >> V[i];



  int ans = 0;
  for(int i=0;i<=N;i++){
    for(int j=0;j<=N;j++){
      if(i + j > N) break;
      //cout << "aa" << endl;

      int res = K - i - j;
      if(res < 0) break;

      priority_queue<int, vector<int>, greater<int> > que;
      //cout << "aa" << endl;
      for(int k = 0; k < i; k++) que.push(V[k]);
      for(int k = 0; k < j; k++) que.push(V[N - 1 - k]);
      //cout << "aa" << endl;

      for(int k = 0; k < res; k++){
        if(que.size() == 0) break;
        int p = que.top();
        if(p < 0) que.pop();
        else break;
      }

      int tmp = 0;
      //cout << "a" << endl;
      while(que.size()){
        tmp += que.top();
        que.pop();
      }

      //if(tmp == 19) cout << i << j << endl;

      ans = max(ans, tmp);
    }
  }

  cout << ans << endl;
  return 0;
}
