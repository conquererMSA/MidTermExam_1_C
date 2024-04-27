//4: count capital, smal and digits solution
#include<stdio.h>
#include<string.h>
int main() {
    int testCase;
    scanf("%d", &testCase);
    while(testCase--) {
        char s[10000]; 
        scanf("%s", s);
        int cpL = 0;
        int smL = 0;
        int digit = 0;
        for(int i = 0; i < strlen(s); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                cpL++;
            }
            else if(s[i] >= 'a' && s[i] <= 'z') {
                smL++;
            }
            else if(s[i] >= '0' && s[i] <= '9') {
                digit++;
            }
        }
        printf("%d %d %d\n", cpL, smL, digit); 
    }
    return 0;
}