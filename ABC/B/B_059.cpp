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
  string a,b;
  cin >> a >> b;

  int N = a.size();
  int M = b.size();

  if(N > M){
    cout << "GREATER" << endl;
    return 0;
  }
  if(N < M){
    cout << "LESS" << endl;
    return 0;
  }

  for(int i=0;i<N;i++){
    if(a[i] > b[i]){
      cout << "GREATER" << endl;
      return 0;
    }
    if(a[i] < b[i]){
      cout << "LESS" << endl;
      return 0;
    }
  }

  cout << "EQUAL" << endl;
  return 0;
}
