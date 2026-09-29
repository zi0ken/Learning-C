#include <stdio.h>

int main(){
    /*
    Format specifiers are what tells the program what to put inside of printf
    Some format specifiers are: %d --> for integers, %f --> for floats or doubles, %lf --> preferred for doubles,
    %c --> for characters, %s --> for strings.

    You can add modifiers
    For Int some modifiers are: 
    - width --> %3d, %1d, %-2d. specifies the minimum width of the numbers's display. works with floats too
    - (+) --> shows a + sign next to positive integers. works with floats too
    - 0 with the width --> replaces all the empty space with 0

    For Floats some modifiers are:
    - precision --> %.3f, %.4f, %.1f. specifies how many digits to show after the .

    We can merge modifiers together if we need to
    */
    int num1 = 23;
    int num2 = 3;
    int num3 = -8;

    float price1 = 19.99;
    float price2 = 30.50;
    float price3 = -14.89;

    printf("%-5d\n", num1);
    printf("%+03d\n", num2);
    printf("%04d\n", num3);

    printf("%.3f\n", price1);
    printf("%+9.1f\n", price2);
    printf("%.10f\n");
}