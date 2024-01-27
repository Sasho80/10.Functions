00.Problem:Learning Functions C++
Let's write a program using a function (printSentence()) to output
of the sentence I am learning functions in C++.

01.Problem: Blank Receipt
Write a method that prints a blank receipt. The method should call another three methods: one to 
print the header, one for the middle part of the receipt and one for the lower part.
![image](https://github.com/Sasho80/10.Functions/assets/7139995/3a3d90bf-7ea9-40b5-9096-523cc8931b3f)

02.Problem: Sign of an Integer
Create a method that prints the sign of an integer n.
![image](https://github.com/Sasho80/10.Functions/assets/7139995/787062c2-89ab-4039-bd1a-d6c1e4e7fd09)

03.Problem: Printing a Triangle
Create a method which prints a triangle as in the examples:
![image](https://github.com/Sasho80/10.Functions/assets/7139995/a5985386-f423-4c68-891b-5a5b6c1ebd35)

04.Problem: Draw a Filled Square
Print on the console a filled square with side n, as in the examples below:
![image](https://github.com/Sasho80/10.Functions/assets/7139995/8c596fc3-793f-48cc-be49-616e5385d5dd)

05.Problem: Calculating Triangle Area
Create a method that calculates the area of a triangle using the given base and height and returns it 
as a result.
![image](https://github.com/Sasho80/10.Functions/assets/7139995/f9d3933e-2bce-4bc5-971e-2a17ca84bdb7)

06.Problem: Math Power
Create a method that calculates and returns as result the power of a given number.
Sample Input and Output
![image](https://github.com/Sasho80/10.Functions/assets/7139995/b8d99cb5-584e-476a-bb53-da0217ac0ee1)

07.Problem: The Larger Of Two Values
The input is two values of the same type. The values can be of int, char or string type. Create a 
method GetMax() that returns as a result the greater of the two values.

![image](https://github.com/Sasho80/10.Functions/assets/7139995/9ef4b782-bd02-4e86-99b5-aa8f23d43295)

08.Problem: "Hello, Name!"
Write a method which takes a name as a parameter and prints on the console "Hello, {name}!".
![image](https://github.com/Sasho80/10.Functions/assets/7139995/abd29a29-8bef-4acd-87d8-1af866016e46)

09.Problem: Min Method - Return the Smaller Number
Create a method GetMin(int a, int b), which returns the smaller of given two numbers. Write a 
program, which takes as input three numbers and prints the smallest of them. Use the method 
GetMin(int, int), which you have already created
![image](https://github.com/Sasho80/10.Functions/assets/7139995/c55063f5-8272-4d32-8580-c37d0d38ce66)

10.Problem: String Repeater
Create a method RepeatString(str, count), which takes parameters of type string and an 
integer n and returns the string, repeated n times. After this print the result on the console.

![image](https://github.com/Sasho80/10.Functions/assets/7139995/df39b663-dc73-4370-a7c8-670a873c0b25)

11.Problem: Nth Digit
Create a method FindNthDigit(number, index), which takes a number and index N as parameters 
and prints the Nth digit of the number (counting from right to left and starting from 1). After that print 
the result on the console.

![image](https://github.com/Sasho80/10.Functions/assets/7139995/535603a5-b219-475e-a92e-a1db28d6c452)

12.Problem: Integer to Base
Write a method IntegerToBase(number, toBase), which takes as parameters an integer and a base 
of a numeral system and returns the integer converted to the given numeral system. After this the 
result should be printed on the console. The input number will always be in decimal numeral system, 
and the base parameter will be between 2 and 10.
![image](https://github.com/Sasho80/10.Functions/assets/7139995/88449341-21f8-4107-a578-fc241ae84b85)

13.Problem: Notifications
Write a program, which takes an integer n and n input messages and prints n output messages, based 
on the input. For each message read a few lines. Each message starts with messageType: “success”, 
“warning” or “error”:
• If messageType is “success” read operation + message (each from a new line).
• If messageType is “warning” read only message (from a new line).
• If messageType is “error” read operation + message + errorCode (each from a new line).
Print on the console each read message, formatted depending on its messageType. After the headline 
of the message print as much “=”, as the length of the printed headline and print an empty line after 
each message (to understand in detail look at the examples).
![image](https://github.com/Sasho80/10.Functions/assets/7139995/aa78c471-f772-4f47-8d26-400227d8b750)
![image](https://github.com/Sasho80/10.Functions/assets/7139995/98d8feed-852c-4077-bb02-dfe67f8a9544)

14.Problem: Numbers to Words
Write a method Letterize(number), which reads an integer and prints it in words in English 
according to the conditions below:
• Print in words the hundreds, the tens and the ones (and the eventual minus) according to the 
rules of the English language.
• If the number is larger than 999, you must print "too large".
• If the number is smaller than -999, you must print "too small".
• If the number is negative, you must print "minus" before it.
• If the number is not built up of three digits, you shouldn't print it.
![image](https://github.com/Sasho80/10.Functions/assets/7139995/e5dca1f6-e79a-4356-9453-800e44543e76)

15.Problem: String Encryption
Write a method Encrypt(char letter), which encrypts a given letter in the following way:
• It takes the first and the last digit from the ASCII code of the letter and concatenates them into 
a string, which will represent the result.
• In the beginning of the string, which represents the result, we will insert the symbol which 
matches the following condition:
o ASCII code of the letter + the last digit of the ASCII code of the letter.
• After that in the end of the string, which represents the result, you concatenate the character 
which matches the following condition:
o ASCII code of the letter - the first digit of the ASCII code of the letter.
• The method should return the encrypted string.
Example:
• j → p16i
o ASCII code of j is 106 → First digit – 1, last digit – 6.
o We concatenate the first and the last digit → 16.
o At the beginning of the string, which represents the result, concatenate the symbol, which 
you get from the sum of the ASCII code + the last digit → 106 + 6 → 112 → p.
o At the end of the string, which represents the result, concatenate the symbol, which you 
get from subtracting the ASCII code – the first digit → 106 - 1 → 105 → i.
Using the method shown above, write a program which takes a sequence of characters, encrypts them
and prints the result on one line.
The input data will always be valid. The Main method must read the data given by the user – an 
integer n, followed by a character for each of the following n lines.
Encrypt the symbols and add them to the encrypted string. In the end, as a result, you must print an 
encrypted string as in the following example.
Example:
• S, o, f, t, U, n, i → V83Kp11nh12ez16sZ85Mn10mn15h
![image](https://github.com/Sasho80/10.Functions/assets/7139995/e6035b28-d493-49fe-8cd8-0f79a3e6c0e0)


