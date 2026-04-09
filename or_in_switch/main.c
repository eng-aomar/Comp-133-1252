#include<stdio.h>
void VOWEL_or_consonant(char var );
int main()
{
//Write a program which takes a character as input and checks whether it is a consonant or a vowel.

    char ch;
    printf("enter the character ");

    scanf("%c",&ch);

    VOWEL_or_consonant(ch);


    return 0 ;
}
void VOWEL_or_consonant(char var )
{
    switch(var)
    {
    case 'A':
    case'a':
        case'E':
            case'e':
                case'O':
    case'o':
    case'U':
    case'u':
    case'I':
    case'i':
        printf("the character is vowel %c",var);
        break ;
    default:
        printf("the character is consonant %c ",var);
    }

}
