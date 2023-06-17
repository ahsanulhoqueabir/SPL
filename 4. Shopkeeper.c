// 3.7 kg rice, 1.7 kg potato, 2.3 kg sugar. 1 kg nice 25 tk, 1 kg potato 20tk, 1 kg sugar! 30 tk. how much should be paid to shopkeeper?
#include<stdio.h>
int main()
{
    float rice=3.7,potato=1.7,sugar=2.3,price=25,ppotato=20,psugar=30,total;
    total=(rice*price)+(potato*ppotato)+(sugar*psugar);
    printf("You should be paid: %.2f Tk",total);

}
