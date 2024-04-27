//problem 2: count only consonants
#include<stdio.h>
#include<limits.h>
#include<string.h>
int main(){
    char s[100001];
    scanf("%s",&s);
    int totalCons=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            totalCons++;
        }
        }
        printf("%d",totalCons);
    return 0;
}