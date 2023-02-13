#include <iostream>
#include <string>
using namespace std;

/* Write a function printArray such that
input: pointer to the last element of array,
	the length of the array
returns: nothing
function: Display (cout) the elements of array in order
Hint: array elements are sequential in memory
Example: for this array -> A[5] = { 2, 55, 7, 44, 11 }
		printArray(&A[4], 5) should print  "2 55 7 44 11"
*/
//To DO *****************************************






/* Write a function incrementArray such that
input: pointer to the first element of array,
     	the length of the array,
	 and a number "increment" to add to each element 
returns: nothing
function: increase each array element by the value "increment"
Hint: array elements are sequential in memory
Example: for this array -> A[5] = { 2, 55, 7, 44, 11 }
		incrementArray(&A[4], 5, 2) should result in A being:
		    {2+2, 55+2, 7+2, 44+2, 11+2} so the values are
			{4, 57, 9, 46, 13}  
*/
//TO DO *****************************************








/* Write a function checkPalindrome_String such that
input: String
output: boolean
function: **Use pointers** to access and check whether a given string is palindrome. 
	It means if I reverse it, it would be the same. For example: hannah, and bob
Hint: string is like an array/vector of characters; s.size() returns the size of string s
     if we have a string s, you can access by pointers similarly to arrays, see below
    string msg = "Hello, World!";
    char * letter = &msg[0]; // <-- this is the address to the first letter of the string!
Example: checkPalindrome_String("HANNAH") should return true
*/
//TO DO **************************************











/* Bonus points! - Write a function checkPalindrome_Integer such that
input: int
output: boolean
function: Display (cout) the reverse of the integer, and return true if the number and its reverse are equal
Hint: you can use % to get the digit of numbers
Example: checkPalindrome_Integer(123456) should print "654321" and return false
*/
//TO DO **************************************


