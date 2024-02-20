#include<stdio.h>
int main(){
    int i,count=0;
    char st[100000];
    scanf("%[^
]s",st);
    for(i=0;st[i]!=NULL;i++){
        if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U'){
            count++;
        }
    }
    printf("%d",count);
}