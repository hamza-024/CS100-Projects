#include <stdio.h>
#include <math.h>

int main(){

int numTwenties, numTens, numFives, numOnes, numQuarters, numDimes, numNickels, numPennies;

printf("Enter the number of $20s: ");
scanf("%d", &numTwenties);

printf("Enter the number of $10s: ");
scanf("%d", &numTens);

printf("Enter the number of $5s: ");
scanf("%d", &numFives);

printf("Enter the number of $1s: ");
scanf("%d", &numOnes);

printf("Enter the number of quarters: ");
scanf("%d", &numQuarters);

printf("Enter the number of dimes: ");
scanf("%d", &numDimes);

printf("Enter the number of nickels: ");
scanf("%d", &numNickels);

printf("Enter the number of pennies: ");
scanf("%d", &numPennies);


int cashTotal = (20 * numTwenties) + (10 * numTens) + (5 * numFives) + (1 * numOnes); 
int coinTotal = (25 * numQuarters) + (10 * numDimes) + (5 * numNickels) + (1 * numPennies); 

int coinToCash = coinTotal / 100; 
int centsLeft = coinTotal % 100; 

cashTotal = cashTotal + coinToCash;

double lengthBills, lengthQuarters, lengthDimes, lengthNickels, lengthPennies;
lengthBills = (numTwenties + numTens + numFives + numOnes) * 6.14; 
lengthQuarters = numQuarters * 0.955;
lengthDimes = numDimes * 0.705;
lengthNickels = numNickels * 0.835;
lengthPennies = numPennies * 0.750;

int totalLength = (int)round(lengthBills + lengthQuarters + lengthDimes +lengthNickels + lengthPennies);

printf("You have %d dollars and %d cents\n", cashTotal, centsLeft);

printf("The length of your money is roughly %d inches", totalLength);



} 