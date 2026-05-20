#include <stdio.h>
#include <string.h>

int main(void) {
    //well initialising a big buffer
    char line[1024];

    //looping until EOF which is essentialy null breaking the loop
    while (fgets(line, sizeof(line), stdin)) {
        //strcspn gives the length of the string before \n/
        //since it counts from the number represents the after charachters index from string or of the "\n"s index
        //we replace \n with \0 to mark the end of the string
        //essentially replace \n with \0
        line[strcspn(line, "\n")] = '\0';
        //i mean it prints {"status": "ok", "echo": "string"} n goes to next line;
        printf("{\"status\": \"ok\", \"echo\": \"%s\"}\n", line);
        //it forces output each time and clears the buffer for taking input
        fflush(stdout);
    }

    return 0;
}