#include <stdio.h>
#include <string.h>
int main()
{
    //Declaration

    int width;
    char word[10000];
    char output[10000]; 
    int Starting = 0;
    //int arr[100] = { 0 };
    int len, x, a = 0;

    //user input
    printf("Enter the width of an output line:\n");
    scanf("%d", &width);
    printf("Enter your text (control-d to exit):\n");
    int End = width;
    int index = End - 1; 

    
    

    while(scanf("%s", word) == 1) 
    {
        len = strlen(word);

        if(index - len + 1 < Starting) 
        {    
            while(index >= Starting)
            output[index--] = ' ';
            output[End] = '\n'; 
            Starting = End + 1; 
            End = Starting + width; 
            index = End - 1; 
        }

        for(x =0; x < len; x++)
            output[index--] = word[x];


        if(index > Starting) 
            output[index--] = ' ';
            

    }

    while(index >= Starting)
        output[index--] = ' ';
    
    output[End] = '\0'; 
    printf("\n%s\n" ,output); 

    while (width >= 10) {
        printf("1234567890");
        width -= 10;
    }

    for (int i = 1; i <= width; ++i) {
        printf("%d", i);
    }

    printf("\n");

}