/*
Wap in c to calculate reverse  of a number and check whether the number is palindrome or not
*/
#include<stdio.h>

void ispalindrome(int n){
int original=n;
    int copy=n;
    int remainder=0;
    int sum=0;
    while(copy>0){
        remainder=copy%10;
        sum=sum*10+remainder;
        copy /= 10;
    }
    printf("Reverse number is:%d\n",sum);
    if(sum==original){
           printf("The number is a palindrome number");
    }else{
         printf("The number is not a palindrome number");
    }

}
int main(){
    int n;
    printf("Input a possitive whole number:");
    scanf("%d",&n);
   ispalindrome(n);
    return 0;
}