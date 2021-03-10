#ifndef lbyec2a_h
#define lbyec2a_h

#include <stdio.h>
#include <string.h>
void get_numbers(int size, int arr_numbers[])
{
    /*
    This function would get an input from the user using the console.
    Parameters:
        size (int) = tells you how many expected number of inputs would we need from the user
        arr_numbers(int) = this is where you store the numbers entered by the user
    */
    int i;
    printf("number: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr_numbers[i]);
    }
}

void display_original(int array[], int size)
{
    /* display_original function would simply display the array
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */
}

void display_reverse(int array[], int size)
{
    /* display_reverse function would display the elements array in reverse order
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */
}

void display_even(int array[], int size)
{
    /* display_even function would display the elements of even indices starting from 0
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

}

void display_odd(int array[], int size)
{
    /* display_even function would display the elements of odd indices starting from 1
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

}
void rotate_forward(int array[], int size)
{
    /* rotate_forward function would rotate all elements towards the right. It would ask for index k to know its offset
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

}

void rotate_backward(int array[], int size)
{
    /* rotate_backward function would rotate all elements towards the left. It would ask for index k to know its offset
    Input:
        array[] (int) = the given array
        size (int) = size of the given array
    Returns:
        None
    */

}

char encrypt_character(char a, int key, int sequence_length, char initial_char)
{
    return (a - initial_char + key) % sequence_length + initial_char;
}

char *strrev(char *str)
{
    /*
    This function would return a reversed string. It uses a method called pointers. This is out-of-scope for lbyec2a
    Input:
        str (char *) = it expects a char array (i.e. string)
    Returns:
        the array in reverse order
    */
    char temp, *src, *dest;
    size_t len;

    if (str != NULL)
    {
        len = strlen(str);
        if (len > 1)
        {
            src = str;
            dest = src + len - 1;
            while (src < dest)
            {
                temp = *src;
                *src++ = *dest;
                *dest-- = temp;
            }
        }
    }
    return str;
}

#endif