#include<stdio.h>
int main(){
    int i,count=0;
    char st[100001];
    scanf("%[^
]s",st);
    for(i=0;st[i]!=NULL;i++){
        count++;
    }
    printf("%d",count);
}