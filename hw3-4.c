
#include <stdio.h>
#include <string.h>

int main() {
    char answer[] = "1234";
    char guess[5]; 
    int A = 0, B = 0; 
    
    scanf("%s", guess);

    for(int i = 0; i < 4; i++) {
        if(guess[i] == answer[i]) {
            A++;
        } else {
            for(int j = 0; j < 4; j++) {
                if(guess[i] == answer[j]) {
                    B++;
                }
            }
        }
    }

    printf("%dA%dB\n", A, B);


    return 0;
}
