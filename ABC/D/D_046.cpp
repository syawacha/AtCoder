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

  int ans = 0;
  int sv = 0;
  for(int i=0;i<N;i++){
    if(s[i] == 'g' && sv == 0){
      sv++;
    }
    else if(s[i] == 'g' && sv > 0){
      ans++;
      sv--;
    }
    else if(s[i] == 'p' && sv == 0){
      ans--;
      sv++;
    }
    else if(s[i] == 'p' && sv > 0){
      sv--;
    }
  }

  cout << ans << endl;
  return 0;
}
