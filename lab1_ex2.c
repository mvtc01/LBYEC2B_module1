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