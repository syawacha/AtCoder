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
  string S,T;
  cin >> S >> T;
  int N = S.size();

  //S = S.substr(N-1) + S.substr(0,N-1);

  for(int i=0;i<N;i++){
    S = S.substr(N-1) + S.substr(0,N-1);
    if(S==T) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
