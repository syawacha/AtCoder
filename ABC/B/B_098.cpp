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
  string s;
  cin >> N >> s;

  int ans = 0;
  for(int i=0;i<N;i++){
    int tmp = 0;
    for(int j=0;j<26;j++){
      char ch = 'a' + j;
      bool ex1 = false ,ex2 = false;
      for(int k=0;k<i;k++){
        if(s[k]==ch) ex1 = true;
      }
      for(int k=i;k<N;k++){
        if(s[k]==ch) ex2 = true;
      }
      if(ex1 && ex2) tmp++;
    }

    ans = max(ans,tmp);
  }

  cout << ans << endl;
  return 0;
}
