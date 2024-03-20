#include<stdio.h>
    int check(char st[],char v){
        int i;
        for(i=0;st[i]!=NULL;i++){
            if(st[i]==v){
            return i;
            }
        }
        return -1;
    }
int main(){
    int i;
    char v;
    char st[100001];
    scanf("%[^
]s",st);
    scanf("
");
    scanf("%c",&v);
    int res=check(st,v);
    if(res==-1){
        printf("False");
    }
    else{
        printf("True
");
        printf("%d",res);
    }
}