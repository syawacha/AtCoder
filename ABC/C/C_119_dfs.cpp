#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 1000000000;

int N,A,B,C;
vector<int> l;

int dfs(int n, int na, int a, int nb, int b, int nc, int c){
  if(n==N){
    if(na==0 || nb==0 || nc==0) return INF;
    return abs(A-a)+abs(B-b)+abs(C-c)+10*(na+nb+nc-3);
  }

  int tmp1,tmp2,tmp3,tmp4;
  tmp1=dfs(n+1,na+1,a+l[n],nb,b,nc,c);
  tmp2=dfs(n+1,na,a,nb+1,b+l[n],nc,c);
  tmp3=dfs(n+1,na,a,nb,b,nc+1,c+l[n]);
  tmp4=dfs(n+1,na,a,nb,b,nc,c);
  int ans;
  ans=min(tmp1,tmp2);
  ans=min(ans,tmp3);
  ans=min(ans,tmp4);
  return ans;
}

int main(){
  cin >> N >> A >> B >> C;
  for(int i=0;i<N;i++){
    int temp;
    cin >> temp;
    l.push_back(temp);
  }

  cout << dfs(0,0,0,0,0,0,0) << endl;
  return 0;
}
