#include <stdio.h>
#include <string.h>

void addStringToArray(char* string, char** array, int size) {
    int index = 0;
    while (array[index] != NULL) {
        index++;
    }
    if (index < size) {
        array[index] = strdup(string);
    } else {
        printf("Array is full. Cannot add more strings.\n");
    }
}

int main() {
    char* strings[5] = {NULL};
    addStringToArray("Hello", strings, 5);
    addStringToArray("World", strings, 5);
    addStringToArray("GitHub", strings, 5);
    addStringToArray("Copilot", strings, 5);

    for (int i = 0; i < 5; i++) {
        if (strings[i] != NULL) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}