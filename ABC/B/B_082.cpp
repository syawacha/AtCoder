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
  string s,t;
  cin >> s >> t;
  int n = s.size();
  int m = t.size();

  char S[n];
  char T[m];

  for(int i=0;i<n;i++) S[i] = s[i];
  for(int i=0;i<m;i++) T[i] = t[i];

  sort(S,S+n);
  sort(T,T+m);
  reverse(T,T+m);

  for(int i=0;i<n;i++) s[i] = S[i];
  for(int i=0;i<m;i++) t[i] = T[i];

  if(s<t) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
