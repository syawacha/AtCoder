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
  cin >> N;
  int a[N];
  for(int i = 0; i < N; i++) cin >> a[i];

  int ind = max_element(a, a + N) - a;
  vector<int> b;
  for(int i = 0; i < N; i++){
    if(i != ind){
      b.push_back(a[i]);
    }
  }

  int mxa = *max_element(a, a + N);
  int mxb = *max_element(b.begin(), b.end());

  //cout << ind << endl;
  for(int i = 0; i < N; i++){
    if(i == ind){
      cout << mxb << endl;
    } else {
      cout << mxa << endl;
    }
  }

  return 0;
}
