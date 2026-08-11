/*
WAP in c to check whether a number is Amstrong ot not
*/
#include<stdio.h>
#include<stdbool.h>
bool isamstrong(int n){
    int original=n;
    int copy=n;
    int remainder=0;
    int sum=0;
    while(copy>0){
        remainder=copy%10;
        sum=sum+(remainder*remainder*remainder);
        copy /= 10;
    }
   if(original==sum){
    return true;
   }
   return false;
}
int main(){
    int n;
    printf("Input a possitive whole number:");
    scanf("%d",&n);
    if(isamstrong(n)){
        printf("The number is a amsrorng number");
    }
    else{
        printf("The number is not a anstrong number");
    }
    return 0;
}