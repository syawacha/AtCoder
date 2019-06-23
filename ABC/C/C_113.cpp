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
  int N,M;
  cin >> N >> M;
  int P[M],Y[M];
  vector<int> vec[N+1];
  for(int i=0;i<M;i++){
    cin >> P[i] >> Y[i];
    vec[P[i]].push_back(Y[i]);
  }
  for(int i=1;i<=N;i++){
    sort(vec[i].begin(),vec[i].end());
  }
  for(int i=0;i<M;i++){
    printf("%06d",P[i]);
    int temp;
    temp=lower_bound(vec[P[i]].begin(),vec[P[i]].end(),Y[i])-vec[P[i]].begin()+1;
    printf("%06d\n",temp);
  }

  return 0;
}
