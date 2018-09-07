#include <stdio.h>

int main()
{
    int c, blanks, tabs, newlines;
    blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                blanks++;
                break;
            case '\t':
                tabs++;
                break;
            case '\n':
                newlines++;
                break;
        }
    }
    printf("\n%10.10s: %d\n", "Blanks", blanks);
    printf("%10.10s: %d\n", "Tabs", tabs);
    printf("%10.10s: %d\n", "Newlines", newlines);
}
