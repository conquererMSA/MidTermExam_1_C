//problem 1: divisible by 2 and 3
#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    int lenOfArray;
    scanf("%d",&lenOfArray);
    int arr[lenOfArray];
    for(int i=0; i<lenOfArray; i++){
        scanf("%d",&arr[i]);
    }
    int div2=0;
    int div3=0;
    for(int i=0; i<lenOfArray; i++){
        if(arr[i]%2==0){
            div2++;
        }else if(arr[i]%3==0){
            div3++;
        }
    }
    printf("%d %d",div2,div3);
    return 0;
}