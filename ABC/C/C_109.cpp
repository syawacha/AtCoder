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
  int N,X;
  cin >> N >> X;
  int x[N];
  for(int i=0;i<N;i++) cin >> x[i];

  vector<int> pos;
  pos.push_back(X);
  for(int i=0;i<N;i++) pos.push_back(x[i]);
  sort(pos.begin(),pos.end());
  vector<int> dist;
  for(int i=0;i<N;i++) dist.push_back(pos[i+1]-pos[i]);
  sort(dist.begin(),dist.end());

  int mn = dist[0];

  while(mn!=1){
    bool isok=true;
    for(int i=0;i<N;i++){
      if(dist[i]%mn != 0){
        isok = false;
        break;
      }
    }

    if(isok){
      break;
    }else{
      mn--;
    }
  }

  cout << mn << endl;
  return 0;
}
