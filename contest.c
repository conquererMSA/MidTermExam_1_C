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

// //problem 2: count only consonants
// #include<stdio.h>
// #include<limits.h>
// #include<string.h>
// int main(){
//     char s[100001];
//     scanf("%s",&s);
//     int totalCons=0;
//     for(int i=0; i<strlen(s); i++){
//         if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
//             totalCons++;
//         }
//         }
//         printf("%d",totalCons);
//     return 0;
// }

// //problem 4: calculate work days
// #include<stdio.h>
// int main(){
//         int testCase;
//         scanf("%d",&testCase);
//         while(testCase--){
//             int primaryWorker, additionalWorker, primaryDays;
//         scanf("%d %d %d", &primaryWorker, &additionalWorker, &primaryDays);
//         int totalWorker=primaryWorker+additionalWorker;
//         int calculateDays=(primaryDays*primaryWorker)/totalWorker;
//         int fewDays=primaryDays-calculateDays;
//         printf("%d\n",fewDays);
//         }
//     return 0;
// }

// //problem 4: count capital, small and digit;
// // 1 testcase error 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int testCase;
//     scanf("%d",&testCase);
//     while(testCase--){
//         char s[1001];
//         scanf("%s",&s);
//         int cpL=0;
//         int smL=0;
//         int digit=0;
//         for(int i=0; i<strlen(s); i++){
//             // printf("%c ",s[i]);
//             if(s[i]>='A'&&s[i]<='Z'){
//                 cpL++;
//             }
//             else if(s[i]>='a'&&s[i]<='z'){
//                 smL++;
//             }else if(s[i]>='0'&&s[i]<='9'){
//                 digit++;
//             }
//         }
//         printf("%d %d %d",cpL,smL,digit);
//         printf("\n");
//     }
//     return 0;
// }
// //4 solution
// #include<stdio.h>
// #include<string.h>

// int main() {
//     int testCase;
//     scanf("%d", &testCase);
    
//     while(testCase--) {
//         char s[10000]; 
//         scanf("%s", s);
        
//         int cpL = 0;
//         int smL = 0;
//         int digit = 0;
        
//         for(int i = 0; i < strlen(s); i++) {
//             if(s[i] >= 'A' && s[i] <= 'Z') {
//                 cpL++;
//             }
//             else if(s[i] >= 'a' && s[i] <= 'z') {
//                 smL++;
//             }
//             else if(s[i] >= '0' && s[i] <= '9') {
//                 digit++;
//             }
//         }
        
//         printf("%d %d %d\n", cpL, smL, digit); 
//     }
    
//     return 0;
// }


// //problem 5: print n times 1 to n
// #include<stdio.h>
// #include<limits.h>
// #include<string.h>
// int main(){
//     int times, lmt;
//     scanf("%d %d",&times,&lmt);
//     for(int i=1; i<=times; i++){
//         for(int i=1; i<=lmt; i++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// //problem 6: count letters
// #include<stdio.h>
// #include<limits.h>
// #include<string.h>
// int main(){
//     char s[10001];
//     scanf("%s",&s);
//     int len=strlen(s);
//     int fqArr[26]={0};
//     for(int i=0; i<=len; i++){
//       int val=s[i]-97;
//        fqArr[s[i]-97]++;
//     }
//     for(int i=0; i<26; i++){
//         if(fqArr[i]>0){
//             printf("%c - %d\n",i+97, fqArr[i]);
//         }
//     }
//     return 0;
// }

// //problem 7: exist or not
// #include<stdio.h>
// #include<limits.h>
// #include<string.h>
// int main(){
//     int testCase;
//     scanf("%d",&testCase);
//     while(testCase--){
//        int lenOfArr;
//         scanf("%d",&lenOfArr);
//         long long int arr[lenOfArr];
//         for(int i=0; i<lenOfArr; i++){
//             scanf("%lld",&arr[i]);
//         }
//         long long int existNum;
//         scanf("%lld",&existNum);
//         int check=0;
//         for(int i=0; i<lenOfArr; i++){
//             if(arr[i]==existNum){
//                 check=1;
//                 break;
//             }
//         }
//         if(check==1){
//            printf("YES");
//         }else{
//             printf("NO");
//         }
//         printf("\n");
//     }
//     return 0;
// }