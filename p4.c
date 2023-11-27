#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPositiveInteger(char token[]) {

    char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < strlen(token); i++) {
        if (!strchr(arr, token[i])) {
            return 0;
        }
    }
    return 1;
    
}

int isNegativeInteger(char token[]) {

    char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    if (token[0] == '-') {
        for (int i = 1; i < strlen(token); i++) {
            if (!strchr(arr, token[i])) {
                return 0;
            }   
        }
        return 1;

    }
    else
    return 0;
    
}

int isBinaryNumber(char token[]) {
    int x = strlen(token);

    if (x > 2) {
        if (token[0] == '0' && token[1] == 'b') {
            for (int i = 2; i < x; i++) {
                if ((token[i] != '0') && (token[i] != '1')) {
                    return 0;
                }
            }
            return 1;
        }

        else {
            return 0;
        }
    }

    return 0;
}

int isGuid(char token[]) {
    char hexArr[100] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'a', 'b', 'c', 'd', 'e', 'f' };
    int len = strlen(token);
    if (len == 36) {
        if (token[8] == '-' && token[13] == '-' && token[18] == '-' && token[23] == '-') {
            for (int i = 0; i < len; i++) {
                if (i != 8 && i != 13 && i != 18 && i != 23) {
                    if (strchr(hexArr, token[i]) == NULL) {
                        return 0;
                    }
                }
            }
            return 1;
        }

        else {
            return 0;
        }
    }

    else {
        return 0;
    }

}
int isPositiveFloatingPoint(char token[]) {

    char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int x = strlen(token);
    int flag = 0;

    if (x > 2) {
        if (token[0] != '.' && token[x-1] != '.') {
            for (int i = 0; i < strlen(token); i++) {
                if (!strchr(arr, token[i])) {
                    if (token[i] == '.' && flag == 0)
                        flag++;
                    else
                        return 0;
                }            
            }
            return 1;
        }

        else {
            return 0;
        }

    }

    else {
        return 0;
    }
}
int isNegativeFloatingPoint(char token[]) {

    char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int x = strlen(token);
    int flag = 0;

    if (token[0] == '-') {
        if (x > 3) {
            if (token[1] != '.' && token[x-1] != '.') {
                for (int i = 1; i < strlen(token); i++) {
                    if (!strchr(arr, token[i])) {
                        if (token[i] == '.' && flag == 0)
                            flag++;
                        else
                            return 0;
                    }            
                }
                return 1;
            }

            else {
                return 0;
            }

        }

        else {
            return 0;
        }
    }

return 0;

}

int main() {
char token[1000];

    printf("Enter a token to identify, EOF to stop:\n");

    while (scanf("%s", token) != EOF) {

        
        // If Positive 
        if (isPositiveInteger(token)) {
            printf("The token is a positive integer\n");
        }
        // If Negative
        else if (isNegativeInteger(token)) {
            printf("The token is a negative integer\n");
        }

        else if (isBinaryNumber(token)) {
            printf("The token is a binary number\n");
        }

        else if (isGuid(token)) {
            printf("The token is a guid\n");
        }

        else if (isPositiveFloatingPoint(token)) {
            printf("The token is a positive floating-point number\n");
        }

        else if(isNegativeFloatingPoint(token)) {
            printf("The token is a negative floating-point number\n");

        }

        else {
            printf("The token cannot be identified\n");
        }

        

        printf("Enter a token to identify, EOF to stop:\n");


    }

}


