#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "lbyec2a.h"
char encrypt_uppercase_letter(char letter)
{
    /*
    encrypt_uppercase_letter encrypts the input using the prescribed encrpytion
    E.g.#1  A -> D
    E.g.#2  E -> H
    E.g.#3  Z -> C
    This function only works if the input characters is an uppercase letter
    Input: 
        letter = the input character 
    Returns:
        outchar = the encrypted character
    */
    if (letter >= 'A' && letter <= 'W') letter+=3;          //when input letter is between A to W, output is a 3-step shift right from reference letter
    else if (letter >= 'X' && letter <= 'Z') letter-=23;    //when input letter is between X to Z, output is a 23-step shift left from the reference letter
    return letter;
}
char encrypt_lowercase_letter(char letter)
{
    /*
    encrypt_lowercase_letter encrypts the input using the prescribed encrpytion
    E.g.#1  a -> d
    E.g.#2  e -> h
    E.g.#3  z -> c
    This function only works if the input characters is a lowercase letter
    Input: 
        letter = the input character 
    Returns:
        outchar = the encrypted character
    */
    if (letter >= 'a' && letter <= 'w') letter+=3;          //when input letter is between a to w, output is a 3-step shift right from reference letter
    else if (letter >= 'x' && letter <= 'z') letter-=23;    //when input letter is between x to z, output is a 23-step shift left from the reference letter
    return letter;
}
char encrypt_number(char number)
{
    /*
    encrypt_number encrypts the input using the prescribed encrpytion
    E.g.#1  0 -> 3
    E.g.#2  5 -> 8
    E.g.#3  9 -> 2
    This function only works if the input characters is a number
    Input: 
        letter = the input character 
    Returns:
        outchar = the encrypted character
    */
    if (number >= '0' && number <= '6') number+=3;          //when input number is between 0 to 6, output is a 3-step shift right from reference letter
    else if (number >= '7' && number <= '9') number-=7;     //when input letter is between 7 to 9, output is a 7-step shift left from reference letter
    return number;
}
char encrypt_alphanumeric(char alphanum)
{
    /*
    encrypt_alphanumeric encrpyts the input character using the prescribed encryption
    It can accept any characters as input. But, it would only encrypt alphabet and numberic (aka alphanumerics) characters
    If it's non-alphanumeric, it would only return the same character
    Input:
        alphanum (char) = the input character to be encrypted
    Returns:
        outchar = character in encrypted form
    */
    if (alphanum >= 'A' && alphanum <= 'Z')
    {
        return encrypt_uppercase_letter(alphanum);
    }
    else if (alphanum >= 'a' && alphanum <= 'z')
    {
        return encrypt_lowercase_letter(alphanum);
    }
    else if (alphanum >= '0' && alphanum <= '9')
    {
        return encrypt_number(alphanum);
    }
    else
    {
        return alphanum;
    }
}

void encrypt_message(char message[], int size)
{
    /*
    encrypt_message would display the message (in encrypted form) using encrypt_alphanumeric
    so that no one else could understand the message.
    Input:
        message[] (char) = the message that needs encryption
        size (int) = the size of the given message (which is an array)
    Returns:
        None
    */
    int i = 0;

    for (i = 0; i < size; i++)
    {
        printf("%c", encrypt_alphanumeric(message[i]));
    }
}

int main(void)
{
    char phrase[100];
    int length;
    printf("Phrase: ");
    scanf(" %[^\n]s", phrase); //Get string with whitespace

    length = strlen(phrase);

    encrypt_message(phrase, length);
    return 0;
}
