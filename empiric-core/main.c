#include <stdio.h>
#include <string.h>

int main(void) {
    char line[1024];

    while (fgets(line, sizeof(line), stdin)) {
        line[strcspn(line, "\n")] = '\0';
        printf("{\"status\": \"ok\", \"echo\": \"%s\"}\n", line);
        fflush(stdout);
    }

    return 0;
}