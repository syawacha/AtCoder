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
  bool ex[26];
  fill(ex,ex+26,false);
  for(int i=0;i<s.size();i++){
    ex[s[i]-'a'] = true;
  }

  for(int i=0;i<26;i++){
    if(!ex[i]){
      cout << char(i + 'a') << endl;
      return 0;
    }
  }

  cout << "None" << endl;
  return 0;
}
