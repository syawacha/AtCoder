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

  int ans1 = 0;
  for(int i=0;i<N;i++){
    if(i % 2 == 0 && s[i] == '0') ans1++;
    if(i % 2 == 1 && s[i] == '1') ans1++;
  }

  int ans2 = 0;
  for(int i=0;i<N;i++){
    if(i % 2 == 0 && s[i] == '1') ans2++;
    if(i % 2 == 1 && s[i] == '0') ans2++;
  }

  cout << min(ans1, ans2) << endl;
  return 0;
}
