#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    int sum=0;
    int add=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+pow(i,2);
    }
    for(i=1;i<=n;i++){
        add=add+i;
    }
   int plus=pow(add,2);
  int dif=abs(sum-plus);
   printf("%d",dif);
}