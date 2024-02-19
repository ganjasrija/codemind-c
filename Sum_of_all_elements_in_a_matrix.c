#include<stdio.h>
int main(){
    int m,n,i,j;
    int sum=0;
    scanf("%d%d",&m,&n);
    int A[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        sum=sum+A[i][j];
        }
    }
    printf("%d",sum);
}