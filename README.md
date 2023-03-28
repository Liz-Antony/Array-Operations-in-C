# Array-Operations-in-C
The code is written in C language and is used to perform various operations on an array of integers. The operations are:

Check if the elements in the array are prime or not.
Determine if the elements in the array are odd or even.
Find the sum and average of the elements in the array.
Find the maximum and minimum element in the array.
The main function initializes an array named arr with ten integer values. It then calls the sizeof function to determine the length of the array and assigns it to a variable len. The code then prints the heading of each column.

The for loop is used to iterate through each element of the array and perform the above-mentioned operations. Within the for loop, the code calls the isPrime function to check whether the current element is prime or not. The function takes an integer argument and returns 1 if the argument is prime, otherwise, it returns 0.

The code also checks whether the current element is odd or even using an if-else statement. The sum of all the elements is calculated and the average is found by dividing the sum by the length of the array.

Finally, the getMaxAndMin function is called to find the maximum and minimum element in the array. The function takes the array and the length of the array as arguments and returns nothing. The function iterates through each element of the array and updates the value of min and max variables accordingly.

The output of the code is the values of each column in a tabular form for each element of the array. The output also includes the sum, average, minimum and maximum values of the array.
![Screenshot (2342)](https://user-images.githubusercontent.com/104863304/228104514-27902833-dff5-4f1c-891c-0d92882a21d8.png)
