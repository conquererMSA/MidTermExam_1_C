

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