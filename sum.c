#include<stdio.h>

int main() {
    int n,sum=0,m;
    printf("Enter a number:");
    scanf("%d",&n);
while(n>0){
    m=n%10; // 0 //0
    sum=sum+m; //0 //0
    n=n/10; //1 //0
}
    printf("Sum is=%d",sum);
    return 0;
    }
