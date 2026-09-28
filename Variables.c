#include <stdio.h>
#include <stdbool.h>

int main(){
    // int = whole numbers (4 bytes)
    // float = decimal numbers (4 bytes)
    // double = more precise decimal numbers (8 bytes)
    // char = single characters (1 byte)
    // char[] = array of characters/string (depends)
    // bool = true or false (1 byte, requires <stdbool.h>)

    int age = 18;
    float e = 2.71;
    double pi = 3.14159;
    char me = 'K';
    char name[] = "Kenzi";
    bool studiesInUni = true; // 1 works too, true = 1, false = 0

    printf("My name is: %s\n", name);
    printf("I am %d years old\n", age);
    printf("My name starts with a %c\n", me);
    printf("The value of pi is: %f\n", pi);
    printf("The value of e is: %f\n", e);
    printf("%d", studiesInUni);
}