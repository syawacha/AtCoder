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
  string s;
  cin >> s;
  int N = s.size();

  int cnt[26] = {};
  for(int i=0;i<N;i++){
    char c = s[i];
    cnt[(int)(c - 'a')]++;
  }

  int ans = 0;
  for(int i=0;i<26;i++){
    
  }

  return 0;
}
