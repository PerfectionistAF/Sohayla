This file discusses setting up, running and other details of question 1.

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
Open it on your favourite IDE and start running "Question 1.cpp" !!

NB: Do not uncomment any code comments. They were kept for review purposes only.
--------------------------------------------END-----------------------------------------------------