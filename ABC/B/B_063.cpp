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
  cin >> s;
  int cnt[26] = {};
  for(int i=0;i<s.size();i++){
    cnt[s[i]-'a']++;
  }

  for(int i=0;i<26;i++){
    if(cnt[i]>=2){
      cout << "no" << endl;
      return 0;
    }
  }

  cout << "yes" << endl;
  return 0;
}
