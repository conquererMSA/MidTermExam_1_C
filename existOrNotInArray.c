//problem 7: exist or not
#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    int testCase;
    scanf("%d",&testCase);
    while(testCase--){
       int lenOfArr;
        scanf("%d",&lenOfArr);
        long long int arr[lenOfArr];
        for(int i=0; i<lenOfArr; i++){
            scanf("%lld",&arr[i]);
        }
        long long int existNum;
        scanf("%lld",&existNum);
        int check=0;
        for(int i=0; i<lenOfArr; i++){
            if(arr[i]==existNum){
                check=1;
                break;
            }
        }
        if(check==1){
           printf("YES");
        }else{
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}