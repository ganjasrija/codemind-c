#include<stdio.h>
#include<string.h>
int main(){
    char s[10000];
    scanf("%[^
]s",s);
    int i;
    char t;
    int l=strlen(s);
    for(i=0;i<l/2;i++){
        t=s[i];
        s[i]=s[l-1-i];
        s[l-i-1]=t;
        
    }
    
        printf("%s",s);
    
    
}