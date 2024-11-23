#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void process_input(const char* input) {
    if (strlen(input) < 5) {
        printf("Input too short.\n");
        return;
    }
    if (strcmp(input, "crash") == 0) {
        printf("You found a bug!\n");
        abort();  // Simulate a crash
    }
    printf("Input processed: %s\n", input);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    process_input(argv[1]);
    return 0;
}


