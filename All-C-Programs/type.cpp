#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isInteger(char* input) {
    int i = 0;
    if (input[0] == '-' || input[0] == '+')
        i = 1;

    for (; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            return false;
        }
    }

    return true;
}

bool isFloat(char* input) {
    int i = 0;
    if (input[0] == '-' || input[0] == '+')
        i = 1;

    bool dotFound = false;
    for (; input[i] != '\0'; i++) {
        if (input[i] == '.') {
            if (dotFound) {
                return false;
            }
            dotFound = true;
        } else if (!isdigit(input[i])) {
            return false;
        }
    }

    return dotFound;
}

bool isBoolean(char* input) {
    if (strcmp(input, "true") == 0 || strcmp(input, "false") == 0) {
        return true;
    }

    return false;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./type_determination <value1> [<value2> ...]\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        char* input = argv[i];
        
        if (isInteger(input)) {
            printf("%s is an integer.\n", input);
        } else if (isFloat(input)) {
            printf("%s is a floating-point number.\n", input);
        } else if (isBoolean(input)) {
            printf("%s is a boolean.\n", input);
        } else {
            printf("%s is a string.\n", input);
        }
    }

    return 0;
}
