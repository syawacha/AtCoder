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
  int N;
  cin >> N;
  string s;
  cin >> s;

  int sum[N+1];
  sum[0] = 0;
  for(int i=1;i<=N;i++){
    if(s[i-1] == 'I'){
      sum[i] = sum[i-1] + 1;
    }
    if(s[i-1] == 'D'){
      sum[i] = sum[i-1] - 1;
    }
  }

  cout << *max_element(sum,sum+N+1) << endl;
  return 0;
}
