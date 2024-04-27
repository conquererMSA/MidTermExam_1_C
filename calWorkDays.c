//problem 3: calculate work days
#include<stdio.h>
int main(){
        int testCase;
        scanf("%d",&testCase);
        while(testCase--){
            int primaryWorker, additionalWorker, primaryDays;
        scanf("%d %d %d", &primaryWorker, &additionalWorker, &primaryDays);
        int totalWorker=primaryWorker+additionalWorker;
        int calculateDays=(primaryDays*primaryWorker)/totalWorker;
        int fewDays=primaryDays-calculateDays;
        printf("%d\n",fewDays);
        }
    return 0;
}