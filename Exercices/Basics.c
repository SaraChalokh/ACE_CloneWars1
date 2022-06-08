// This file contains some small exercices
#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    printf("=== Menu ===\r\n1. Royal Cheese\r\n2. Mc Delux\r\n3. Mc Becon\r\n4. Big Mac\r\nChose your menu\r\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You choice is Royal Cheese\r\n");
        break;
    case 2:
        printf("You choice is Mc Delux\r\n");
        break;
    case 3:
        printf("You choice is Mc Bacon\r\n");
        break;
    case 4:
        printf("You choice is Big Mac\r\n");
        break;
    default:
        printf("This is not in the menu\r\n");
    }
}