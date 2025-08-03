# Array and String Operations in C++

**Name**: Niand Phatak  
**PRN**: 24070123065  
**Batch**: ENTC A3  

---

## 1. Code Name: Input and Output for Array

### Theory:
Arrays are used to store multiple values of the same data type in a single variable. This program teaches basic array handling by allowing the user to input a fixed number of integers and then displaying them. The `for` loop is used to access each index of the array. Understanding how to input and retrieve data from arrays is foundational in C++ programming as it builds the base for operations like searching, sorting, and manipulating data collections.

### Algorithm:
1. Declare an integer array of size 7.
2. Use a loop to accept 7 integers from the user.
3. Use another loop to display all entered values.

### Output:
Enter 7 numbers:
3
2
3
2
1
4
5
You entered:
3
2
3
2
1
4
5

## 2. Code Name: Reversing an Array

### Theory:
Reversing an array is a classic example of array manipulation and introduces the concept of two-pointer techniques. This program accepts a dynamic number of elements, stores them in an array, and then reverses the array by swapping elements from both ends. It highlights how memory is organized linearly in arrays and helps in understanding in-place data manipulation — a critical concept in both interviews and real-world programming.

### Algorithm:
1. Input the number of elements.
2. Take array input using a loop.
3. Reverse the array using a two-pointer approach.
4. Print the reversed array.

### Output:
Please, enter the total no. you want to enter: 6
Enter the element 1: 3
Enter the element 2: 4
Enter the element 3: 4
Enter the element 4: 2
Enter the element 5: 1
Enter the element 6: 2

Reverse all elements of the array:
2 1 2 4 4 3


## 3. Code Name: Search Element in an Array

### Theory:
Searching is a fundamental operation in data structures. This program demonstrates **linear search**, which is used to find a particular value in an array by checking each element sequentially. It introduces the idea of flags (like the `found` boolean) and how conditions are handled inside loops. This logic is essential in many programming applications like validation, real-time monitoring, and user queries.

### Algorithm:
1. Declare an array of predefined elements.
2. Accept the key to search.
3. Use a loop to compare each element with the key.
4. If found, print the position; otherwise, indicate not found.

### Output:
Enter the number you want to search for: 10
Key found at location: 1


## 4. Code Name: Find Sum and Average of Elements in an Array

### Theory:
This program focuses on basic arithmetic operations using arrays. It demonstrates how to iterate through an array to accumulate values (sum) and how to perform a type cast for calculating average as a floating-point number. Understanding summation and averaging of array elements helps in statistical calculations, data analysis, and foundational logic for more complex algorithms like standard deviation and weighted mean.

### Algorithm:
1. Take input for the number of elements.
2. Store elements in an array.
3. Sum all elements using a loop.
4. Compute the average and print both.

### Output:
Enter number of elements: 6
Enter elements:
3
4
5
6
7
1
Sum of elements: 26
Average of elements: 4.33333


## 5. Code Name: Find Min and Max Element in an Array

### Theory:
Finding the minimum and maximum values in a data set is one of the most frequent and useful tasks. This program uses comparisons inside a loop to track the smallest and largest values. It is essential in optimization problems, sorting algorithms, and performance evaluation. This builds the idea of value comparison logic which is critical in algorithm development.

### Algorithm:
1. Input the number of elements (must be > 5).
2. Read the array elements.
3. Initialize `min` and `max` with the first element.
4. Traverse the array to update `min` and `max`.

### Output:
Enter the number of elements): 6
Enter 6 elements:
7
2
3
4
5
56
Minimum element: 2
Maximum element: 56


## 6. Code Name: Taking String as an Input and Displaying It

### Theory:
This program introduces character arrays and how to handle strings in C++ without using the `string` class. The use of `cin` restricts input to single-word strings (no spaces). It builds understanding of how strings are stored in memory as arrays of characters terminated by a null character `\0`. It's fundamental in understanding string I/O before moving to more advanced string manipulation techniques.

### Algorithm:
1. Declare a character array.
2. Accept string input.
3. Display the string.

### Output:
Enter a string: lowercase
You entered:lowercase

## 7. Code Name: Printing String in Reverse

### Theory:
This code is an excellent introduction to string traversal and manipulation. It manually calculates the string’s length and then uses a loop to print it in reverse. It reinforces array indexing, loop control structures, and the concept of null-terminated strings in C++. This concept is essential in recursive functions, buffer processing, and text formatting.

### Algorithm:
1. Input string into a character array.
2. Determine its length.
3. Print characters from the end to the start.

### Output:
Enter a string: malicious
Reversed string: suoicilam

## 8. Code Name: Concatenation of String

### Theory:
Concatenation involves combining two strings into one. In this program, strings are manually concatenated by traversing character arrays — without using built-in functions. This helps in understanding memory layout, character placement, and the importance of the null character. It's fundamental for string manipulation, data formatting, and dynamic text processing.

### Algorithm:
1. Input two strings.
2. Find the end of the first string.
3. Append the second string character by character.
4. Display the result.

### Output:
Enter first string: Ninad
Enter second string: Phatak
Concatenated string: Ninad Phatak


## 9. Code Name: Checking Whether the String is Palindrome or Not

### Theory:
A **palindrome** is a string that reads the same forwards and backwards. This program compares characters from both ends of the string using indexing and a loop, teaching important concepts of string symmetry and condition checking. Palindrome checking is a classic example in string processing and is often asked in interviews and entrance tests due to its simplicity and logic strength.

### Algorithm:
1. Input a string.
2. Determine its length.
3. Compare characters from start and end moving inward.
4. If all match, it's a palindrome.

### Output:
Enter a string: globalissues
globalissues is not a palindrome.

Enter a string: racecar
racecar is a palindrome.

Edit
Enter a string: globalissues
globalissues is not a palindrome.

Enter a string: racecar
racecar is a palindrome.
