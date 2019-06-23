#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;

ll INF=10000000000000;

int main(){
  cin.sync_with_stdio(false);
  cin.tie(0);

  int A,B,Q;
  cin >> A >> B >> Q;
  ll s[A];
  for(int i=0;i<A;i++) cin >> s[i];
  ll t[B];
  for(int i=0;i<B;i++) cin >> t[i];
  ll x[Q];
  for(int i=0;i<Q;i++) cin >> x[i];

  for(int i=0;i<Q;i++){
    ll s_left;
    ll s_right;
    ll t_left;
    ll t_right;

    ll* ps = lower_bound(s,s+A,x[i]);
    ll* pt = lower_bound(t,t+B,x[i]);
    if(ps==s){
      s_left=-INF;
      s_right=s[0];
    }else if(ps==s+A){
      s_left=s[A-1];
      s_right=INF;
    }else{
      s_left=*(ps-1);
      s_right=*ps;
    }

    if(pt==t){
      t_left=-INF;
      t_right=t[0];
    }else if(pt==t+B){
      t_left=t[B-1];
      t_right=INF;
    }else{
      t_left=*(pt-1);
      t_right=*pt;
    }

    //cout << endl;
    //cout << s_left << endl;
    //cout << s_right << endl;
    //cout << t_left << endl;
    //cout << t_right << endl;

    ll ans=INF;
    ans=min(ans,x[i]-min(s_left,t_left));
    ans=min(ans,max(s_right,t_right)-x[i]);
    ans=min(ans,2*s_right-t_left-x[i]);
    ans=min(ans,2*t_right-s_left-x[i]);
    ans=min(ans,x[i]+s_right-2*t_left);
    ans=min(ans,x[i]+t_right-2*s_left);
    cout << ans << endl;
  }
  return 0;
}
