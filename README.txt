Aditya Gupta
agupt24@uic.edu
652571368

PROJECT 4

Implemented Programmable Calculator as per spec provided in the project document. Used command pattern to implement various commands user would input.

Project consists of 7 files:

1. Main.cpp -     Consists of the main function; Menu is defined; Global variables - A string vector of expressions, a character for 
		  command, and registers w, x, y, z are defined.

2. ICommand.h-    Contains the declaration of classes - ICommand (abstract base class) Input, Run, Debug, Continue, Print (concrete derived classes).

3. Input.cpp -    Contains member functions readFile() to read input file and displayFile() to display the vector of expressions.

4. Run.cpp -      Contains constructor and execute() function definition for Run class. Runs the expressions until completion of 
	          instruction sequence or until 100 executions have been performed.

5. Debug.cpp -    Contains constructor and execute() function definition for Debug class. Runs expressions one by one and displays the 
		  output after every execution. Please note that when (?) expression is encountered, d command will first take control to the 'int' line, 
		  another d command will start the execution from that line (use d command twice to execute expression at line 'int').

6. Continue.cpp - Contains constructor and execute() function definition for Continue class. Continue will perform similar to run.

7. Print.cpp -    Contains constructor and execute() function definition for Debug class. 


A menu appears as the user runs the code.

user is prompted to choose a command:
		Choose a command (i, d, r, c, p, q) : 

Try the following commands

Command      	Function

i		Enter 'i'<space><filename> and tap enter. It will take input and display the expressions.
		E.g. i exp.txt
		Input file should have space seperated literals without indexs
		E.g. 
			following is correct:
				x = 5
				w = 0
				y = 5
				w = w + 1
				y = y - 1
				y ? 4
				x = x - 1
				x ? 3

			following is incorrect:
				x=5
				w = 0.
				1: y = 5
				3: w = w + 1
				y=y-1
				y?4
				x ? go 3

d		Enter 'd'. It will execute one expression and display registers

r		Enter 'r' to execute the expressions (max 100 expressions).

c		Enter 'c' to continue executions (max 100 more)

p		Enter 'p' to print registers

q		Enter 'q' to exit
				
