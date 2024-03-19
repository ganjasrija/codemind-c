#include<stdio.h>
int main(){
    char st[10001];
    int i;
    scanf("%[^
]s",st);
    char max=NULL;
    for(i=0;st[i]!=NULL;i++){
        if(st[i]>max){
            max=st[i];
        }
    }
    printf("%c",max);
}