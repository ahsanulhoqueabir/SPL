#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    //if(n%10==7 || n%10==4||n%4==0 || n%7==0)
      //  printf("YES");
   // else
      //  printf("NO");
    while(n!=0){
    s=n%10;
    if(s!=4 && s!=7)
    {
        return 0;
    }
    n/=10;
    }

}
