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
  int N,M,C;
  cin >> N >> M >> C;
  int B[M];
  for(int i=0;i<M;i++) cin >> B[i];
  int A[N][M];
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++) cin >> A[i][j];
  }

  int cnt = 0;
  for(int i=0;i<N;i++){
    int sum = 0;
    for(int j=0;j<M;j++){
      sum += A[i][j]*B[j];
    }
    sum += C;
    if(sum>0) cnt++;
  }

  cout << cnt << endl;
  return 0;

}
