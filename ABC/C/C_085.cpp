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
  int N,Y;
  cin >> N >> Y;

  for(int x=0;x<=N;x++){
    for(int y=0;y<=N;y++){
      int sum = 10000*x + 5000*y + 1000*(N-x-y);
      if(N-x-y<0) continue;
      if(sum==Y){
        cout << x << " " << y << " " << N-x-y << endl;
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;
  return 0;
}
