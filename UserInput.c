#include <stdio.h>
#include <string.h> // To make removing the \n after a string input possible (easier)

int main() {
    // Some notes before the lesson: Not assigning values to variables doesn't delete what existed in that adress before which leads to undefined behaviour. Ex:
    int random;
    float anotherRandom;
    char randomer;
    printf("%d\n", random);
    printf("%lf\n", anotherRandom);
    printf("%c\n", randomer);
    // To get rid of the undefined behaviour before assigning the real values, we put placeholders: 0 for numbers, '\0' for characters and "" for strings.

    // To get user input we use scanf("%x", &x), this puts the contents of "" into the address of the variable x.
    int age;
    float gpa;
    char grade;
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // The space at the beginning is to get rid of the \n in the input buffer (idk what that means exactly)

    getchar(); // This thing is also for getting rid of the \n in the buffer
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // scanf does not read spaces
    name[strlen(name) - 1] = '\0'; // Replaces the \n with a \0

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
}