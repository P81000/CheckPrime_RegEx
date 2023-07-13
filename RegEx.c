#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*---------      /^1?$|^(11+?)\1+$/      ---------*/
bool isPrime(int n) {
    char str[n];
    memset(str, '1', n); // Create a string with 'n' '1' characters

    for (int i = 0; i < n; i++) {
        printf("%c", str[i]);
    }

    printf("\n");
    // 1?
    if (n == 0 || n == 1) {
        return false;
    }

    // (11+?)
    int patternLength = 2;
    while (patternLength <= n / 2) {
        if (n % patternLength == 0) {
            bool matches = true;
            for (int i = 0; i < n; i++) {
                if (str[i] != '1') {
                    matches = false;
                    break;
                }
            }
            if (matches) {
                return false;
            }
        }
        patternLength++;
    }

    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d is prime: %s\n", n, isPrime(n) ? "true" : "false");

    return 0;
}
