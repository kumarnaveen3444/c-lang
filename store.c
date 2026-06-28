#include <stdio.h>

int main() {
    
    char family[5][50] = {
        "sita (Mother)",
        "babulal (Father)",
        "shyam (Brother)",
        "gita (Sister)",
        "ankit (Me)"
    };

    printf("--- My Family Members ---\n");
    for(int i = 0; i < 5; i++) {
        
        printf("%d. %s\n", i + 1, family[i]);
    }

    return 0;
}