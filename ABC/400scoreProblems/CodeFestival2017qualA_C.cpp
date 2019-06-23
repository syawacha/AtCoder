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
  int H,W;
  cin >> H >> W;
  map<char, int> mp;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      char c;
      cin >> c;
      mp[c]++;
    }
  }

  priority_queue<int> que;
  for(auto it = mp.begin(); it != mp.end(); it++){
    que.push(it->second);
  }

  //必要なペアの数
  int p1, p2, p4;
  if(H % 2 == 1 && W % 2 == 1){
    p1 = 1;
    p2 = (H + W - 2) / 2;
    p4 = (H * W - H - W + 1) / 4;
  }
  else if(H % 2 == 0 && W % 2 == 1){
    p1 = 0;
    p2 = H / 2;
    p4 = (H * W - H) / 4;
  }
  else if(H % 2 == 1 && W % 2 == 0){
    p1 = 0;
    p2 = W / 2;
    p4 = (H * W - W) / 4;
  }
  else if(H % 2 == 0 && W % 2 == 0){
    p1 = 0;
    p2 = 0;
    p4 = H * W / 4;
  }

  //cout << p1 << " " << p2 << " " << p4 << endl;
  //p4=============================
  while(p4 > 0){
    int x = que.top();
    que.pop();
    if(x >= 4){
      p4--;
      x -= 4;
    }
    else {
      cout << "No" << endl;
      return 0;
    }
    if(x > 0) que.push(x);
  }

  //p2============================
  while(p2 > 0){
    int x = que.top();
    que.pop();
    if(x >= 2){
      p2--;
      x -= 2;
    }
    else {
      cout << "No" << endl;
      return 0;
    }
    if(x > 0) que.push(x);
  }

  //p1===========================
  while(p1 > 0){
    int x = que.top();
    que.pop();
    if(x >= 1){
      p1--;
      x -= 1;
    }
    else {
      cout << "No" << endl;
      return 0;
    }
    if(x > 0) que.push(x);
  }

  cout << "Yes" << endl;
  return 0;
}
