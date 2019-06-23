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
  int N,Q;
  cin >> N >> Q;
  string s;
  cin >> s;

  bool aca[N];
  bool acc[N];
  fill(aca,aca+N,false);
  fill(acc,acc+N,false);
  for(int i=0;i<N-1;i++){
    if(s[i]=='A' && s[i+1] == 'C'){
      aca[i] = true;
      acc[i+1] = true;
    }
  }

  int suma[N+1];
  int sumc[N+1];
  suma[0] = 0;
  sumc[0] = 0;
  for(int i=1;i<=N;i++){
    suma[i] = suma[i-1] + aca[i-1];
    sumc[i] = sumc[i-1] + acc[i-1];
  }

  int l[Q],r[Q];
  for(int i=0;i<Q;i++){
    cin >> l[i] >> r[i];
    l[i]--;
  }
  for(int i=0;i<Q;i++){
    cout << sumc[r[i]] - suma[l[i]] << endl;
  }
  return 0;
}
