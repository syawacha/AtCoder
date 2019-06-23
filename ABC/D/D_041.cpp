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
  int N,M;
  cin >> N >> M;
  int x[M],y[M];
  for(int i=0;i<M;i++) cin >> x[i] >> y[i];


  //bit DP
  ll dp[1 << N];
  fill(dp,dp+(1<<N),0LL);
  dp[0] = 1LL;

  for(int i=1;i<(1 << N);i++){
    //cout << i << "   ";
    int itmp = i;
    vector<int> use;
    for(int j=0;j<N;j++){
      if(itmp % 2 == 1) use.push_back(j);
      itmp /= 2;
    }

    /*for(int j=0;j<use.size();j++){
      cout << use[j] << " ";
    }
    cout << endl;*/

    if(use.size() == 1){
      dp[i] = 1LL;
      continue;
    }

    for(int j=0;j<use.size();j++){
      int p = use[j];
      vector<int> tmp;
      for(int k=0;k<M;k++){
        if(x[k]-1==p) tmp.push_back(y[k]-1);
      }
      for(int k=0;k<use.size();k++){
        if(k != j) tmp.push_back(use[k]);
      }
      sort(tmp.begin(),tmp.end());


      /*for(int k=0;k<tmp.size();k++){
        cout << "     " << tmp[k];
      }
      cout << endl;*/

      bool check = true;
      for(int k=0;k<tmp.size()-1;k++){
        if(tmp[k] == tmp[k+1]) check = false;
      }
      if(!check) continue;

      int nxtind = i;
      nxtind -= (1 << use[j]);
      dp[i] += dp[nxtind];
    }
  }

  cout << dp[(1 << N) - 1] << endl;
  return 0;
}
