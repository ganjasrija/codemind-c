#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char t;
    char s1[10000];
    scanf("%[^
]s",s1);
    char s2[10000];
    strcpy(s2,s1);
    int l=strlen(s2);
    for(i=0;i<l/2;i++){
        t=s2[l-i-1];
        s2[l-i-1]=s2[i];
        s2[i]=t;
    }
    int c=strcmp(s1,s2);
    if(c==0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}