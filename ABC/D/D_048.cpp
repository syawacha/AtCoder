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

  if(s[0] == s[N-1]){
    if(N%2==0) cout << "First" << endl;
    else cout << "Second" << endl;
  }
  else{
    if(N%2==0) cout << "Second" << endl;
    else cout << "First" << endl;
  }

  return 0;
}
