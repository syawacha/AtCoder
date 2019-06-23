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
  int A,B,C,D,E,F;
  cin >> A >> B >> C >> D >> E >> F;

  vector<int> avaw;
  bool dp[31];
  fill(dp,dp+31,false);
  dp[0] = true;
  for(int i=0;i<31;i++){
    if(dp[i]){
      if(i + A <= 30){
        dp[i+A] = true;
      }
      if(i + B <= 30){
        dp[i+B] = true;
      }
      avaw.push_back(i*100);
    }
  }

  /*for(int i=0;i<avaw.size();i++){
    cout << avaw[i] << endl;
  }
  cout << endl;*/

  vector<int> avas;
  bool dp2[F];
  fill(dp2,dp2+F,false);
  dp2[0] = true;
  for(int i=0;i<F;i++){
    if(dp2[i]){
      if(i + C < F){
        dp2[i+C] = true;
      }
      if(i + D < F){
        dp2[i+D] = true;
      }
      avas.push_back(i);
    }
  }

  /*for(int i=0;i<avas.size();i++){
    cout << avas[i] << endl;
  }
  cout << endl;*/


  double std = (double)E / (double)(100 + E);
  double ans = 0;
  int ans1 = 0,ans2 = 0;
  for(int i=0;i<(int)avaw.size();i++){
    for(int j=0;j<(int)avas.size();j++){
      if(avaw[i]==0 && avas[j]==0) continue;
      double tmp;
      tmp = (double)avas[j]/(double)(avaw[i]+avas[j]);
      if(tmp <= std && ans <= tmp && avaw[i]+avas[j]<=F){
        ans = tmp;
        ans1 = avaw[i] + avas[j];
        ans2 = avas[j];
      }
    }
  }

  cout << ans1 << " " << ans2 << endl;
  return 0;
}
