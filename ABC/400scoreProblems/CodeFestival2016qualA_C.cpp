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
  int K;
  cin >> K;

  for(int i=0;i<N;i++){
    if(s[i] == 'a') continue;
    int n = (int)('z' - s[i] + 1);
    if(n <= K){
      s[i] = 'a';
      K -= n;
    }
  }

  s[N-1] = (char)(s[N-1] + K % 26);

  cout << s << endl;
  return 0;
}
