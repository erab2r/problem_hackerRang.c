#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char n[102];  
    scanf("%s", n); 
    int odd_Sum = 0, even_Sum = 0;
    int len = strlen(n);
    for (int i=len-1;i >= 0;i--) {
        int digit = n[i] - '0';  
        int position_From_Right = len - i;  
        
        if (position_From_Right % 2 == 1) {
            odd_Sum += digit; 
        } else {
            even_Sum += digit;  
        }
    }

    int Absolute_difference = abs(odd_Sum - even_Sum); 
    if (Absolute_difference % 11 == 0) {
        printf("YES\n");  
    }
    else{
         printf("NO\n");  
    }

    return 0;
}
