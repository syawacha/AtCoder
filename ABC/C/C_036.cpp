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
  int a[N],atmp[N];
  for(int i=0;i<N;i++) cin >> a[i];
  for(int i=0;i<N;i++) atmp[i] = a[i];
  sort(atmp,atmp+N);

  map<int,int> mp;
  int b = 1;
  mp[atmp[0]] = 0;
  for(int i=1;i<N;i++){
    if(atmp[i] != atmp[i-1]){
      mp[atmp[i]] = b;
      b++;
    }
  }

  for(int i=0;i<N;i++){
    cout << mp[a[i]] << endl;
  }

  return 0;
}
