// program to find digits of numbers in words inputed

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    const char *word;
    int value;
} WordValue;

WordValue numberWords[] = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
    {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9},
    {"ten", 10}, {"eleven", 11}, {"twelve", 12}, {"thirteen", 13},
    {"fourteen", 14}, {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17},
    {"eighteen", 18}, {"nineteen", 19}, {"twenty", 20}, {"thirty", 30},
    {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy", 70},
    {"eighty", 80}, {"ninety", 90}, {NULL, 0}
};

WordValue multipliers[] = {
    {"hundred", 100}, {"thousand", 1000}, {"million", 1000000}, {"billion", 1000000000}, {NULL, 0}
};

int findValue(const char *word, WordValue array[]) {
    for (int i = 0; array[i].word != NULL; i++) {
        if (strcmp(word, array[i].word) == 0) {
            return array[i].value;
        }
    }
    return -1; // Word not found
}

int wordsToNumber(const char *text) {
    int total = 0, current = 0;
    char word[50];
    const char *ptr = text;

    while (*ptr) {
        while (*ptr && !isalpha(*ptr)) ptr++; // Skip non-alphabetic characters
        if (!*ptr) break;

        int len = 0;
        while (isalpha(*ptr)) {
            word[len++] = tolower(*ptr++);
        }
        word[len] = '\0';

        int value = findValue(word, numberWords);
        if (value != -1) {
            current += value;
        } else {
            value = findValue(word, multipliers);
            if (value != -1) {
                if (value == 100) {
                    current *= value;
                } else {
                    current *= value;
                    total += current;
                    current = 0;
                }
            }
        }
    }

    total += current;
    return total;
}

int main() {
    printf("%d\n", wordsToNumber("Three hundred million"));
    printf("%d\n", wordsToNumber("six hundred thousand"));
    return 0;
}