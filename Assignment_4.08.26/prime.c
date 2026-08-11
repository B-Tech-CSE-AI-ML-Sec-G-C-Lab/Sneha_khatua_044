/*
Wap in c to check whether a number is prime or not
*/
#include<stdio.h>
#include<stdbool.h>
bool isprime(int n){
if(n<=2){
    return false;
}
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
}
return true;
}
int main(){
    int n;
    printf("Input a possitive whole number:");
    scanf("%d",&n);
    if(isprime(n)){
        printf("The number is a prime number");
    }
    else{
        printf("The number is not a prime number");
    }
    return 0;
}