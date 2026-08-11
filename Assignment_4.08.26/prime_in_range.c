/*
WAP in c to count the prime number in a given range
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
    int start,end,count=0;
    printf("Input the starting point:");
    scanf("%d",&start);
     printf("Input the ending point:");
    scanf("%d",&end);
    for(int i=start;i<=end;i++){
        if(isprime(i)){
            count++;
        }
    }
    printf("Total prime number is avilable in a given range is:%d",count);

}