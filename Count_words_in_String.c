#include<stdio.h>
#include<string.h>
int main(){
    char s[10000];
    int count=0;
    int i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++){
        if(s[i]==' '){
            count++;
        }
    }
    printf("%d",count+1);
}