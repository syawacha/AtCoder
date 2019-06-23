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
  int N,M;
  cin >> N >> M;
  vector<int> s; //1とNからいける島
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;
    if(a == 1) s.push_back(b);
    if(b == N) s.push_back(a);
  }

  sort(s.begin(),s.end());

  for(int i=1;i<s.size();i++){
    if(s[i] == s[i-1]){
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }

  cout << "IMPOSSIBLE" << endl;
  return 0;
}
