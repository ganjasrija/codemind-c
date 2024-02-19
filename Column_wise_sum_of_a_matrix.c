#include<stdio.h>
int main(){
    int m,n,i,j;
    int sum;
    scanf("%d%d",&m,&n);
    int A[100][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            sum=sum+A[j][i];
        }
        
        printf("%d ",sum);
        
    }
    
}