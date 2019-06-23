#include <stdio.h>

int main(){
  int N;
  int A,B;
  scanf("%d",&N);
  if(N==1){
    printf("Hello World\n");
  }else if(N==2){
    scanf("%d%d",&A,&B);
    printf("%d\n",A+B);
  }
  return 0;
}
