#include <stdio.h>
void printEvenNumbers(int n);
void printOddNumbers(int n);
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The even numbers from 1 to %d are:\n", n);
    printEvenNumbers(n);
    printf("The odd numbers from 1 to %d are:\n", n);
    printOddNumbers(n);
    return 0;
}
void printEvenNumbers(int n){
 for(int i=0; i<=n;i++)
{
if (i%2==0)
printf("%d  ", i);
}
}
void printOddNumbers(int n){
 for(int i=0; i<=n;i++)
{
if (i%2!=0)
printf("%d   ", i);
}
}
