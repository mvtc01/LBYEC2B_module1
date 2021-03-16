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
    for (int i2 = 0; i2<size; i2++) {		//i2 is the indexing variable to navigate through array[]
    	printf("%d ", array[i2]);
	}
    return;
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
    for (int i2 = size-1; i2>-1; i2--) {
    	printf("%d ", array[i2]);
	}
    return;
	
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
    for (int i2 = 0; i2<size; i2++) {
    	if (i2%2 == 0) {		//i2 is divided by 2 and checked if remainder is 0. If so, console is to print data inside array[i2]
    		printf("%d ", array[i2]);	
		}
	}
    return;
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
    for (int i2 = 0; i2<size; i2++) {
    	if (i2%2 != 0) {		//i2 is divided by 2 and checked if remainder is not 0. If so, console is to print data inside array[i2]
    		printf("%d ", array[i2]);
		}
	}
    return;
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
    
	int offset = 0;
    printf("offset: ");
    scanf("%d", &offset);
     
	for(int i2 = 0; i2 < offset; i2++){		 //loops offset-1 number of times, shifts array elements by 1 in every loop
    	int i3, end;
    	end = array[size-1];			//array[size-1] at size=10 is array[9] or the tenth element. Store tenth element to variable end.
    	
    	for (i3 = size-1; i3 > 0; i3--){
    		array[i3] = array[i3-1];
		}
											//upon exiting above for loop, i3=0
		array[i3] = end;					//assign the value of end to array[0]
	}
    for (int i2 = 0; i2<size; i2++) {		//i2 is the indexing variable to navigate through array[]
    	printf("%d ", array[i2]);
	}
    
    return;
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
    int offset = 0;
    printf("offset: ");
    scanf("%d", &offset);
	
	for(int i2 = 0; i2 < offset; i2++){     //loops offset-1 number of times, shifts array elements by 1 in every loop
        int i3, num0;    
        num0 = array[0];  				 //assigns current data at array[0] to variable num0 
        
        for(i3 = 0; i3 < size-1; i3++){    
            array[i3] = array[i3+1];    //rotate array elements by 1 starting from array[0]<-- first element up to array[size-2] or array[8]<-- ninth element
        }    
  									    // upon exiting above for loop, i3=size-1=9
        array[i3] = num0;			    //  assign value of num0 to array[9] <-- tenth element
    }  
    for (int i2 = 0; i2<size; i2++) {		//i2 is the indexing variable to navigate through array[]
    	printf("%d ", array[i2]);
	}
    return;
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
