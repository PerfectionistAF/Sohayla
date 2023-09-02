This file discusses setting up, running and other details of question 2.

SETTING UP YOUR ENVIRONMENT ON VS CODE:
----------------------------------------------------------------------------------------------------
This code was developed on VS code version 1.80.1 
This code runs on C/C++ g++.exe that can be run using mysys compiler
Many IDEs such as CodeBlocks come with a built-in mysys directory, but in VS code, 
the compiler may have to be downloaded first(depending on your PC)
In my case, I downloaded mysys64 which is compatible with Windows-10(64 bit)
After downloading mysys and saving the path to "mingw64.exe" , open VS code:

File->Preferences->Settings

Now type "compiler" in the search box in User tab
Look for "C_Cpp>Default: Compiler Path" and add an item
In "settings.json", paste the path to "mingw64.exe"
It should look like this:

"C_Cpp.default.compilerPath": "e:\\Program Files (x86)\\Compilers\\Mingw-w64C\\mingw64.exe",

Also, make sure to set that path in "launch.json" and "tasks.json"
To find "launch.json" : Ctrl + Shift + P to open Command Palette, then type "Open launch.json"
Repeat for "tasks.json"
Save all the json files

NB: Having the right compiler means that "c_cpp_properties.json" and other ".vscode" files are automatically generated. 

Also, if you're new to VS code, set it up as below:
https://code.visualstudio.com/learn/get-started/basics 
----------------------------------------------------------------------------------------------------
RUNNING THE CODE:
----------------------------------------------------------------------------------------------------
Download and extract the file attached from the email
Open it on your favourite IDE and start running "Question 2.cpp" !!

NB: Do not uncomment any code comments. They were kept for review purposes only. 
----------------------------------------------------------------------------------------------------

*******************************
DETAILS OF "Question 2. cpp" :*
*******************************
REQUIRED:
The problem
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2.
Assume that n will be less than or equal to the maximum integer value and non-negative. You only need to 
write the function(s)
ADVANTAGES AND DISADVANTAGES OF THE WRITTEN FUNCTIONS:
----------------------------------------------------------------------------------------------------
METHOD 1: RECURSIVE PROGRAMMING
MAX = 100
int F_1 (int n):
returns: int 
parameters: int 
complexity: O(n^n)
ADVANTAGES: Simpler coding with just a base case and a recursive case. Best used for traversal.  
DISADVANTAGES: Requires a lot of memory space to hold intermediate stacks between recursive calls.
Small input size and many cpu operations at a time. Large number of operations per time due to exponential time complexity.

METHOD 2: DYNAMIC PROGRAMMING
MAX = 100
int F_2 (int n):
returns: int 
parameters: int 
complexity: O(n)
ADVANTAGES: Input size is linear with number of cpu operations at a time.
Small number of operations per time due to linear time complexity.
Easier when working with pointers, classes, node structs since value or attribute
reading/writing issues are eliminated. No need to "exit" the function, rather the problem is 
solved as a group of known subproblems that can be represented as a tree.
DISADVANTAGES: Output is stored but may not be used in the rest of the subproblems.
Also, there are redundant subproblems. For example: (* represents levels of repetition for separate nodes)
Fibonacci(5) = Fibonacci(4) + Fibonacci(3)*
Fibonacci(4) = Fibonacci(3)* + Fibonacci(2)*
Fibonacci(3)** = Fibonacci(2)* + Fibonacci(1) 
 
METHOD 3: ITERATIVE PROGRAMMING
MAX = 100
int F_3 (int n):
returns: int 
parameters: int 
complexity: O(m*n)
ADVANTAGES: Faster than METHOD 1 but slower than METHOD 2. Simplifies the algorithm.
Keeps everything under one iterating condition.
DISADVANTAGES: Harder to manage since many resources, possibly memory, are required.
--------------------------------------------END-----------------------------------------------------