#include<stdio.h>
int main()
{
    char letter;

    printf("Enter a Letter: ");
    scanf("%c",&letter);

    switch(letter)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    printf("%c is a vowel\n",letter);
    break;
    default:
        printf("%c is not a vowel\n",letter);
        break;
    }

}
