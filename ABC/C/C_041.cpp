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
  pair<int,int> p[N];
  for(int i=0;i<N;i++){
    cin >> p[i].first;
    p[i].second = i + 1;
  }
  sort(p,p+N);
  reverse(p,p+N);
  for(int i=0;i<N;i++){
    cout << p[i].second << endl;
  }

  return 0;
}
