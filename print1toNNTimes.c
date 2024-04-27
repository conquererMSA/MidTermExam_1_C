//problem 5: print n times 1 to n
#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    int times, lmt;
    scanf("%d %d",&times,&lmt);
    for(int i=1; i<=times; i++){
        for(int i=1; i<=lmt; i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}