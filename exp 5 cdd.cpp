#include <stdio.h>
int main() {
    char ch;
    int whitespaceCount = 0;
    int newlineCount = 0;
    printf("Enter your input text (terminate with ~):\n");
    while ((ch = getchar()) != '~') {
        if (ch == ' ' || ch == '\t') whitespaceCount++;
        if (ch == '\n') newlineCount++;
    }
    printf("Whitespace count: %d\nNewline count: %d\n", whitespaceCount, newlineCount);
    return 0;
}
