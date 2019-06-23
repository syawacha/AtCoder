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
  int N;
  cin >> N;
  pair<int,int> r[N];
  pair<int,int> b[N];
  for(int i=0;i<N;i++){
    cin >> r[i].first >> r[i].second;
  }
  for(int i=0;i<N;i++){
    cin >> b[i].first >> b[i].second;
  }

  sort(b,b+N);
  bool used[N];
  fill(used,used+N,false);

  //cout << endl;
  int ans = 0;
  for(int i=0;i<N;i++){
    int ind = -1;
    int ymax = -1;
    for(int j=0;j<N;j++){
      if(!used[j] && r[j].first<b[i].first && r[j].second<b[i].second && ymax<r[j].second){
        ind = j;
        ymax = r[j].second;
      }
    }
    if(ind != -1){
      ans++;
      used[ind] = true;
      //cout << r[ind].first << " " << r[ind].second;
      //cout << "  " << b[i].first << " " << b[i].second << endl;
    }
  }

  cout << ans << endl;
  return 0;
}
