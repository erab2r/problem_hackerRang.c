#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); 
    for (int i = 0; i < t; i++) {
        char s[1001];
        scanf("%s", s);  
        int freq[26] = {0};          
        int len = strlen(s);        
        for (int i = 0;i<len;i++) {
            freq[s[i]-'a']++;
        }
        int odd_count = 0;
        for (int i = 0;i<26;i++) {
            if (freq[i] % 2 == 1) {
                odd_count++;
            }
        }
        int result;
        if (odd_count > 0) {
            result = odd_count - 1;
        } else {
            result = 0;
        }
        printf("%d\n", result);
    }

    return 0;
}
