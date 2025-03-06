#include <stdio.h>
#include <string.h>


int main() {
    char* strings[5] = {NULL};
    addStringToArray("Hello", strings, 5);
    addStringToArray("World", strings, 5);
    addStringToArray("GitHub", strings, 5);
    addStringToArray("Copilot", strings, 5);

    // first print the taskman
    print_taskman();

    for (int i = 0; i < 5; i++) {
        if (strings[i] != NULL) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}