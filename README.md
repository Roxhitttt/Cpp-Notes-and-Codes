#  Cpp Notes and Codes

### _**I am going to take notes of C++ here**_
-------------------------------------------------------------------------
##### First Basic Code of C++
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/abfca224b5ff2d1224a550b23fcfa2fb19fd2b6a/Basic_programs/first.cpp

##### Second Basic Code of C++
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/abfca224b5ff2d1224a550b23fcfa2fb19fd2b6a/Basic_programs/second.cpp

-------------------------------------------------------------------------
##### How to take Input from user and print it in the cout block code=
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/abfca224b5ff2d1224a550b23fcfa2fb19fd2b6a/Basic_programs/demo_input.cpp

##### Swapping Program
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/49ece10dc3f53d05321f16602841470ec54cc766/Basic_programs/Swapping.cpp

__________________________________________________________________________
#####  _**Arithmatic Operators:=**_
-    plus          Addition Operator.
-    minus          Substraction Operator.
-    multiply          Multiplication Operator.
-    /          Divisin Operator.
-    %          Modulus Operator.

`Here is the code on Arithmatic Operator = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/cbd91c1e714777912595202b6aaa34b916f864e1/Basic_programs/Arithmatic_operator.cpp

-------------------------------------------------------------------------

##### _**Relational Operators:=**_

|  Name | Example | Description |
| --- | --- | --- |
| Greater than | a>b | if a>b then it returns 1 otherwise it returns 0 |
| Less than | a<b | if a<b then it returns 1 otherwise it returns 0 |
| Greater than or equal to | a>=b | if a>=b then it will return 1 otherwise return 0 |
| Less than or equal to | a<=b | if a<=b then it will return 1 otherwise return 0 |
| Equal to  Equal to | a==b | if a==b then it will return 1 otherwise it will return 0 |
| Not equal to | a!=b | if a is not equal to b then it will return 1 otherwise it will return 0 |

`Here is the code on Arithmatic Operator = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/abfca224b5ff2d1224a550b23fcfa2fb19fd2b6a/Basic_programs/Relational_operator.cpp
     
-------------------------------------------------------------------------   
##### **_Logical Operator:=_**

|Symbol|Name|
|---|---|
|&&|And|
|\||Or|
|!|Not|

`Truth Table For &&,||,! Logical Operator:= `
|A|B|A&&B|A Or Or B| ! A |
|---|---|---|---|---|
|0|0|0|0|1|
|0|1|0|1|1|
|1|0|0|1|0|
|1|1|1|1|0|

`Here is the code on Logical Operator = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/c14e1f3a6e9979d96939fd6e462929993016db7c/Basic_programs/Logical_Operator.cpp
__________________________________________________________
##### **_Bit-Wise Operator:= _**

- &
- |
- ^
- ~
- />>
- <<

`Truth Table For &,|,^ Bit-Wise Operator:= `
|A|B|A&B| A Or B | A^B |
|---|---|---|---|---|
|0|0|0|0|0|
|0|1|0|1|1|
|1|0|0|1|1|
|1|1|1|1|0|

if a=5  binary of 5 is 0101 

if b=7  binary of 7 is 0111
   
                      ______
                      
                       0101   Gives 5
                       
                       0111   Gives 7
                       
                       0010   Gives 2

`Here is the code on Logical Operator = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/541bcba7f666193f2acf75054da9839327672a7b/Basic_programs/Bit_wise_Operator.cpp
__________________________________________________________
Example 1- `Write a c++ program for the Selection of the student by above 70 percentage and in 1 attempt`

https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/541bcba7f666193f2acf75054da9839327672a7b/Basic_programs/Example.cpp

__________________________________________________________
##### **_If Statement:= _**
+ If is a disicion making statement. It is used for checking particular condition holding or not

Syntax is given below=

if(condition)

{
     Statements
     }

if the condition is true or holds the statement inside the if block, it gets executed.

Exampel 1 - `Write a program to check whether given number is positive or negative number.`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/892d9c8733a7cc3dafd949bea21dfdf525ee9dd2/Basic_programs/Positive_Negative_if.cpp

Example 2 - `Write a program whether given number is divisible by 3 or not.`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/892d9c8733a7cc3dafd949bea21dfdf525ee9dd2/Basic_programs/Divisible_or_not.cpp

Example 3 - `Write a program to check whether addition of two numbers which is accepeted from user is greater than 100 or not.`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/892d9c8733a7cc3dafd949bea21dfdf525ee9dd2/Basic_programs/Greater_than_2_number.cpp

Example 4 - `Write a program whether given character is a Vowel or not.`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/892d9c8733a7cc3dafd949bea21dfdf525ee9dd2/Basic_programs/aeiou.cpp

__________________________________________________________
#####  _**If__Else statement:=**_

+ if else is used for checking the condition, if it is true then if block get execute otherwise else block get execute.
       
Example - `Write a program to check number is even or odd using if else`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/892d9c8733a7cc3dafd949bea21dfdf525ee9dd2/Basic_programs/if_else.cpp

example 2 - `Write a program to check greater number between 2 numbers`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/892d9c8733a7cc3dafd949bea21dfdf525ee9dd2/Basic_programs/if_else1.cpp

Amstrong Number- 3 digit number or 4 digit number | Then cube or individual number betweeen them | Then addition of cube of these 3 digit numbers | gives the answer of same 3 digit number.

- n=4297
- n1=n/1000    = 4
- r1=n%1000    = 927
- n2=r1/100    = 9
- r2=r1%100    = 27
- n3=r2/10     = 2
- n4= r2%10    =7

Example 3 - `Write a program to check whether the Number is Amstrong number or not`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/892d9c8733a7cc3dafd949bea21dfdf525ee9dd2/Basic_programs/amstrong_number.cpp

________________________________________________________________________________________
##### **Switch Case Statement:= **
If we are having multiple condition at a time like printing a month from 12 months then Switch case statement is used.

Syntax of Switch Case Statement-

Switch(condition)

{

case 1: Statements

break;

case 2: Statements

break;

case 3: Statements

break;

case 4: Statements

break;

default: Statement

}

Example  - `Switch Case Demo =`
https://github.dev/Roxhitttt/Cpp-Notes-and-Codes/blob/74462b3180012fab05a3221b6ee47285368913b0/Basic_programs/switch_case_demo.cpp#L11

Example 1 - `Addition,Substraction,multiplication,division operations using switch case statement:= `
https://github.dev/Roxhitttt/Cpp-Notes-and-Codes/blob/1f8212df59295fea1d7c3410eb2105eb6b65e526/Basic_programs/Switch_case_operation.cpp#L1

________________________________________________________________________________________
##### _**While:= **_ 

While is used for Looping Purpose

Syntax is given below:=

Initialization

While(termination)
{
     increment/decrement
}

Example  - `While Statement Demo =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/5549cc26aecbd02ade34241fe0c7408124f75d52/Basic_programs/While_demo.cpp

Example 1 - `Printing number from 1 to 10 in reverse mode using while loop =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/b0a824c92759677bc64c3d2e3a20eeaf7f448f93/Basic_programs/1_to_10_While_loop.cpp

Example 2 - `Printing Even number from 20 to 30 and printing Sum of them using while loop =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/b0a824c92759677bc64c3d2e3a20eeaf7f448f93/Basic_programs/20-to-30_even_number_while.cpp

Example 3 - `printing Factorial of a number using while loop =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/9c3673f54158c9e27187a250d82350f9f8137fba/Basic_programs/Factorial-of-using-while.cpp

`Prime number = THe number which get divided by itself or 1 is called as Prime Number`

Example 4 - `Find prime number using while loop =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/a286f87d8869f06c26583d56fb57110b7cdb1ef4/Basic_programs/prime_number_while.cpp


________________________________________________________________________________________
##### _**Nested While:= **_ 

While in while loop=

while()
{
     while()
          {
          
          }
}

Example  - `Nested While to print number patterns in a column and row in vertical =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/a286f87d8869f06c26583d56fb57110b7cdb1ef4/Basic_programs/while_while.cpp

Example 1 - `Nested While to print number patterns in a column and row in horizontal =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/a286f87d8869f06c26583d56fb57110b7cdb1ef4/Basic_programs/while_while1.cpp

Example 2 - `Printing * Pattern Using Nested while loop =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/c36ae9cb19803a35034841b33aea2f71636c69d2/Basic_programs/Star_pattern_while.cpp

Example 3 - `Print a pattern using Nested while loop =`

________________________________________________________________________________________
##### _**Do While := **_

Do while is used for looping porpose, the major difference between while and do while is that do while executes statement once and then check the condition.
Do while is a exit control loop

Syntax is given bellow 

Do

{

Statement:

increment/decrement

}while(condition);

Example  - `Print 1 to 10 using Do while loop = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/c36ae9cb19803a35034841b33aea2f71636c69d2/Basic_programs/1to10_using_do_while.cpp

Example 1 - `Menu Driven Program using Do while loop = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/c36ae9cb19803a35034841b33aea2f71636c69d2/Basic_programs/menu_driven_do_while.cpp

________________________________________________________________________________________
##### _**For Loop := **_

For(initialization;termination;increment/decrement)

{

Statements

}

Example  - `Print 1 to 10 using For loop = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/49ece10dc3f53d05321f16602841470ec54cc766/Basic_programs/For_loop.cpp

Example 1 - `Print Table using For loop = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/49ece10dc3f53d05321f16602841470ec54cc766/Basic_programs/for_loop_table.cpp

Fibonacci Series
0 and 1 = the next number is the addition of previous 2 numbers means 1 = 2 = 3 = 5 = 8 = 13

Example 2 - `Print Fibonacci series Using For loop = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/ee331d40439d4bc6a6e75fd66e062369e7301e59/Basic_programs/Fibonacci_for_loop.cpp

Example 3 - `Write a program to display sum of odd number between 20 to 30 using for loop = `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/ee331d40439d4bc6a6e75fd66e062369e7301e59/Basic_programs/sum_20to30_for_loop.cpp

Example 4 - `Star Pattern using first 4 spaces using For loop= `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/5b3b287c7d80a224de8d7d946291240efbe6bb11/Basic_programs/Star_pattern1_For_loop.cpp

________________________________________________________________________________________
##### _**Functions := **_

Function is a block of code which is used to accomplish a particular task.

Syntax:= 

Return_tupe Function_name(arguements list)

{

Statements

}

`_There are 4 Types of Functions_`

1. Function without argument without return value: =

Example - `Function Example: =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/2735dbcc3b1a2a53fd6e7a4ff4a8d5023168abe9/Basic_programs/Functions_No_arg_no_return_value.cpp

Example 1 - `Write a program to find factorial of a number asked by user using Functions:= `
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/82ceac9d701b1762d8846aa3ee7a8569db465453/Basic_programs/function_1.cpp

2. Function with argument without return value:=

Example 2 - `Swapping of Numbers using functions`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/82ceac9d701b1762d8846aa3ee7a8569db465453/Basic_programs/Swap_Using_functions.cpp

Example 3 - `Write a function  which accept the parameter one integer one float one character and display it,accept all values from user`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/e86cc869448f360cc6cd2efd28095b8d3b6d6e34/Basic_programs/Basic1_Programs/Functions1_.cpp

3. Funtion with argument with return value:=

Example 4 - `Addition of float numbers using Functions`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/e86cc869448f360cc6cd2efd28095b8d3b6d6e34/Basic_programs/Basic1_Programs/Funtion3.cpp

Example 5 - `Write a c++ Funtion to display the discount of 10 % ,accept the ammount from user`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/e8b77eb465ff15ce708084a3952f1ab0cc969a38/Basic_programs/Basic1_Programs/Function4.cpp
________________________________________________________________________________________
##### _**Arrays := **_

Array is collection of data items having some data type.

Syntax:

Datatype arrayname(size);

Eg: int a[10];

Example - `Simple Program on arrays: =`


__________________________________________________________________________________________
##### _**Class := **_

Class is a user defined user defined data type which binds a different variables and functions inside a single unit that is called as a class

Syntax of class:

class class_name

{

     varaible 
     
     Function
     
};

Object - Object is a run time entity of class until we defined object of class memory is not allocated to the class varialbe and functions

Syntax of Object :

class_name object_name;

Using object we can access varaiables and functions outside the class.

Example - `Simple example taking input from class and output in main fucntion using object : =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/8d2ab6175ead5065309e2aab3c57c17bf8d3863d/Basic_programs/Basic1_Programs/class1.cpp

Example - `Same program but minor changes :Simple example taking input from class and output in main fucntion using object : =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/8d2ab6175ead5065309e2aab3c57c17bf8d3863d/Basic_programs/Basic1_Programs/class2.cpp

Example - `create a class which accept the 2 variables no1 and no2 using get function and perform the addition using add,sub,div,mul functions. : =`
https://github.com/Roxhitttt/Cpp-Notes-and-Codes/blob/8d2ab6175ead5065309e2aab3c57c17bf8d3863d/Basic_programs/Basic1_Programs/class3.cpp





















Function cha 1 type baki ahe 
arrays la mi abscent hoto 









<details><summary>CLICK ME</summary>
<p>

#### We can hide anything, even code!

```ruby
   puts "Hello World"
```

</p>
</details>
