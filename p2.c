#include <stdio.h>
#include <string.h> 

// Hamza Adnan CS 100-006 
// This program follows a series of if statements which will be executed 
// if certain conditions of the program statement are met
// Some of the statements are strings and some are integers. 

int main() {

    char userInput[50]; 
    int x; 

    printf("north, south, east, or west: ");
    scanf("%s", userInput);

    if (strcmp(userInput, "north") == 0) {
        printf("enter a positive integer: ");
        scanf("%d", &x);
        if (x % 2 == 0) {
            printf("yes or no:");
            scanf("%s", userInput);
            if (strcmp(userInput, "yes") == 0) {
                printf("lake");
            }
            else {
                printf("pool");
            }
        }
        else {
            printf("beach");
        }
    }

    if(strcmp(userInput, "south") == 0) {
        printf("Left or right: ");
        scanf("%s", userInput);

        if(strcmp(userInput, "right") == 0) {
            printf("fast or slow: ");
            scanf("%s", userInput);

            if (strcmp(userInput, "slow") == 0) {
                printf("big or small: ");
                scanf("%s", userInput);
                if (strcmp(userInput, "small") == 0) {
                    printf("walk");
                }
                else {
                    printf("run");
                }
            }
            else {
                printf("bike");
            }
        }
        else {
            printf("jog");
        }
    }


    if(strcmp(userInput, "east") == 0) {
        printf("red, white, or gray: ");
        scanf("%s", userInput);

        // if red: 
        if(strcmp(userInput, "red") == 0) {
            printf("yes or no: ");
            scanf("%s", userInput);

            if(strcmp(userInput, "no") == 0) {
                printf("up or down: ");
                scanf("%s", userInput);

                if(strcmp(userInput, "up") == 0) {
                    printf("top-rope");

             }
             else {
                printf("boulder");
             }

            }
            else {
                printf("tree-climb");

            }
        }
        // if white 
        if(strcmp(userInput, "white") == 0) {
            printf("easy or hard: ");
            scanf("%s", userInput);

            if(strcmp(userInput, "easy") == 0) {
                printf("longboard");
            }

            else {
                printf("workout");
            }
        }
        // if gray
        if(strcmp(userInput, "gray") == 0) {
            printf("left, center, or right: ");
            scanf("%s", userInput);

            if(strcmp(userInput, "left") == 0) {
                printf("build or destroy: ");
                scanf("%s", userInput);

                if(strcmp(userInput, "build") == 0) {
                    printf("hike");
                }

                else {
                    printf("spelunk");
                }
            }

            else if(strcmp(userInput, "center") == 0) {
                printf("open or closed: ");
                scanf("%s", userInput);

                if(strcmp(userInput, "open") == 0) {
                    printf("zoo");
                }

                else {
                    printf("aquarium");
                }
            }

            else if(strcmp(userInput, "right") == 0) {
                printf("museum");
            }
        }
        

    }

    if(strcmp(userInput, "west") == 0) {
        printf("enter an integer: ");
        scanf("%d", &x);

        if (x < 0) {
            printf("sunny or cloudy: ");
            scanf("%s", userInput);

            if(strcmp(userInput, "sunny") == 0) {
                printf("tennis");
            }

            else {
                printf("racquetball");
            }
        }

        else {
            printf("frisbee");
        }
    
    
    
    }

}
