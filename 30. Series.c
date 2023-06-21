#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the last number of series");
    scanf("%d",&n);
    if(n%2==0){
        s=s-n;
    }
    else{
        s=s+n;
    }
    printf("The Sum is: %d",s);
}

