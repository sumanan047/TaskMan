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

void print_taskman() {
    printf("  _______  _______  _______  _______  _______  _______  _______  _______ \n");
    printf("                          TASKMAN LOADED                                 \n");
    printf("  _______  _______  _______  _______  _______  _______  _______  _______ \n");
    printf("You can do follwoing things with taskman\n");
    printf("**************************************************************************\n");
    printf("Add task : taskman -a \"task name\"\n");
    printf("Remove task : taskman -r \"task name\"\n");
    printf("List all tasks : taskman -l\n");
}