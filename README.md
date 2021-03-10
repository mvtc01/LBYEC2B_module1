# Laboratory Activity 1 - Arrays



## Exercise 1: Array Twisters (lab1_ex1.c)

Create a Program that asks for 10 integers (Use Arrays). Afterwards, display a navigation menu and perform the following:  
(1) Display the numbers

(2) Display it in reverse order

(3) Display the values of even indices (0th, 2nd, 4th, 6th, 8th, …, 2n)

(4) Display the values of odd indices (1st, 3rd, 5th, 7th, 9th,.., 2n+1)

(5) Ask for an index k, then rotate array to the right.

(6) Ask for an index k, then rotate the array to the left. 

| Sample Input                          | Expected Output                                                                                                                                                                                                                                                                                    |
| ------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 10 45 15 26 35 25 7 12 8 3 <br>1      | number: 10 45 15 26 35 25 7 12 8 3<br>Menu: <br>1. Display the numbers<br>2. Display it in reverse order<br>3. Display values of even indices<br>4. Display values of odd indices<br>5. Rotate array by k (Forward)<br>6. Rotate array by k (Backward) <br>choice: 1<br>10 45 15 26 35 25 7 12 8 3 |
| 10 45 15 26 35 25 7 12 8 3 <br>2      | number: 10 45 15 26 35 25 7 12 8 3<br>Menu: <br>1. Display the numbers<br>2. Display it in reverse order<br>3. Display values of even indices<br>4. Display values of odd indices<br>5. Rotate array by k (Forward)<br>6. Rotate array by k (Backward)<br>choice: 2<br>3 8 12 7 25 35 26 15 45 10  |
| 10 45 15 26 35 25 7 12 8 3 <br>3      | number: 10 45 15 26 35 25 7 12 8 3<br>Menu: <br>1. Display the numbers<br>2. Display it in reverse order<br>3. Display values of even indices<br>4. Display values of odd indices<br>5. Rotate array by k (Forward)<br>6. Rotate array by k (Backward)<br>choice: 3<br>10 15 35 7 8                |
| 10 45 15 26 35 25 7 12 8 3 <br>4      | number: 10 45 15 26 35 25 7 12 8 3<br>Menu: <br>1. Display the numbers<br>2. Display it in reverse order<br>3. Display values of even indices<br>4. Display values of odd indices<br>5. Rotate array by k (Forward)<br>6. Rotate array by k (Backward)<br>choice: 4<br>45 26 25 12 3               |
| 10 45 15 26 35 25 7 12 8 3 <br>5<br>2 | number: 10 45 15 26 35 25 7 12 8 3<br>Menu: <br>1. Display the numbers<br>2. Display it in reverse order<br>3. Display values of even indices<br>4. Display values of odd indices<br>5. Rotate array by k (Forward)<br>6. Rotate array by k (Backward)<br>offset: 2<br>8 3 10 45 15 26 35 25 7 12  |
| 10 45 15 26 35 25 7 12 8 3 <br>6<br>2 | number: 10 45 15 26 35 25 7 12 8 3<br>Menu: <br>1. Display the numbers<br>2. Display it in reverse order<br>3. Display values of even indices<br>4. Display values of odd indices<br>5. Rotate array by k (Forward)<br>6. Rotate array by k (Backward)<br>offset: 2<br>15 26 35 25 7 12 8 3 10 45  |

Testing Guidelines:
- Assume that the length of the input would be exactly 10 all the time
- Assume that inputs are integers all the time.
<br><br><br><br><br>


## Exercise 2: Message Encryption (lab1_ex2.c)

Create a program that encrypts the message of max. length of 100 by doing the following:

1. It asks for a message from the user, it should be able to include whitespace characters.
2. The message shall be encrypted by replacing each character by the character three positions to its right as seen in the ascii table.
3. The encryption should only work on letters and numbers. Suppose that the character is Z, then it should become C.
4. The encrypted message shall be displayed to the screen. 

| Sample Input    | Expected Console Output                    |
| --------------- | ------------------------------------------ |
| Hello World!!!  | Phrase: Hello World!!!<br>Khoor Zruog!!!   |
| Zebra crosSING! | Phrase: Zebra crosSING!<br>Cheud furvVLQJ! |
| f\*\*k you!     | Phrase: f\*\*k you!<br>i**n brx!           |
| Zebra90         | Phrase: Zebra90<br>Cheud23                 |
<br><br><br><br><br>

