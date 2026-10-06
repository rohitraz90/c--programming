#include <stdio.h>
#include <math.h>
int main(void){
    int num1, num2;
    char ch;

    printf ("Enter number 1: ");
    scanf ("%d",&num1);
    printf ("Enter number 2: ");
    scanf ("%d",&num2);
    printf ("Enter your operator (+,-,*,/): ");
    getchar();

    scanf ("%c",&ch);
    

    if (ch == '+'){
        printf ("Sum of %d and %d: %d\n",num1, num2, (num1+num2));
    }
    else if (ch == '-'){
        printf ("Substraction of %d and %d: %d\n",num1, num2, (num1-num2));
    }
    else if (ch == '*'){
        printf ("Multiplication of %d and %d: %d\n",num1, num2, (num1*num2));
    }
    else if (ch == '/'){
        if (num2 != 0)
            printf ("Division of %d and %d: %.2f\n",num1, num2, floor(num1)/num2);
        else 
            printf ("Can't divided by 0");
        }
    

    return 0;
}