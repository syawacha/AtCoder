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
  string S;
  cin >> S;
  int N = S.size();
  int cnt0=0;
  int cnt1=0;
  for(int i=0;i<N;i++){
    if(S[i]=='0') cnt0++;
    if(S[i]=='1') cnt1++;
  }
  cout << 2*min(cnt0,cnt1) << endl;
  return 0;
}
