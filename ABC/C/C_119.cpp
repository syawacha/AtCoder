#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int N,A[3];
  cin >> N >> A[0] >> A[1] >> A[2];
  int l[N];
  for(int i=0;i<N;i++) cin >> l[i];

  int ans=100000000;

  for(int i=0;i<(1 << 2*N);i++){
    vector<int> use[4];
    int t=i;
    for(int j=0;j<N;j++){
      use[t%4].push_back(l[j]);
      t=t/4;
    }

    int sum=0;
    for(int j=0;j<3;j++){
      if(use[j].size()==0){
        sum=100000000;
        break;
      }

      int mp=10*(use[j].size()-1);
      int sm=0;
      for(int k : use[j]) sm+=k;
      mp=mp+abs(A[j]-sm);
      sum+=mp;
    }

    ans=min(ans,sum);
  }

  cout << ans << endl;
  return 0;

}
