#include<stdio.h>
int main(){
    int m,n,i,j;
    int sum=0;
    int a[100][100];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum=sum+a[i][j];
        }
        
    }
    printf("%d",sum);
}