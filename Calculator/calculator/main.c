#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1;
    double number2;
    char operation;

    printf("Enter a number: ");
    scanf("%lf", &number1);
    printf("Enter operation mode: ");
    scanf(" %c", &operation);
    printf("Enter your second number: ");
    scanf("%lf", &number2);

    //Now we need the algorithm.
    if (operation == '+'){
        printf("%lf", number1 + number2);
    }
    else if (operation == '-'){
        printf("%lf",number1 - number2);
    }
    else if (operation == '*'){
        printf("%lf",number1 * number2);
    }
    else if (operation == '/'){
        printf("%lf",number1 / number2);
    }
    else{
        printf("Invalid operation.");
    }
    return 0;
}