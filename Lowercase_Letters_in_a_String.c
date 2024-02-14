#include<stdio.h>
int main(){
    char st[1000];
    int i,count=0;
    scanf("%[^
]s",st);
    for(i=0;st[i]!=NULL;i++){
      if(st[i]>='a'&&st[i]<='z'){
          count++;
      }  
    }
    printf("%d",count);
}