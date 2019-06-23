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

int main(){
  string s;
  int K;
  cin >> s >> K;
  int N = s.size();

  string INF = "z";//最大の文字列
  for(int i=0;i<5000;i++){
    INF += "z";
  }

  string ans[K];
  fill(ans,ans+K,INF);
  for(int i=0;i<K;i++){
    if(i==0){
      for(int j=0;j<N;j++){
        for(int k=j;k<N && k-j+1<=K ;k++){
          ans[0] = min(ans[0], s.substr(j,k-j+1));
        }
      }
    }
    else{
      for(int j=0;j<N;j++){
        for(int k=j;k<N && k-j+1<=K ;k++){
          if(ans[i-1]<s.substr(j,k-j+1)){
            ans[i] = min(ans[i], s.substr(j,k-j+1));
          }
        }
      }
    }
  }

  cout << ans[K-1] << endl;
  return 0;
}
