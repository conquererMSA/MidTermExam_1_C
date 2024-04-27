//problem 6: count letters
#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    char s[10001];
    scanf("%s",&s);
    int len=strlen(s);
    int fqArr[26]={0};
    for(int i=0; i<=len; i++){
      int val=s[i]-97;
       fqArr[s[i]-97]++;
    }
    for(int i=0; i<26; i++){
        if(fqArr[i]>0){
            printf("%c - %d\n",i+97, fqArr[i]);
        }
    }
    return 0;
}