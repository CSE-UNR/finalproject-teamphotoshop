# ProgrammingAssignment10

## Project Goals
The goal of this project is to:
1. Familiarize students with the use of **Arrays of Strings**
2. Be the culmination of concepts learned throughout the entire semester
### Important Notes:
1.	**Comments**: Header comments are required on all files and should include the names of all group members. Points will be deducted if no header comments are included.
3.	**Filename**: Save your program as ```songify.c```
## Program  
It's a bop! Time to write our Songify App!  

### Functionality
Write a program that will allow the user to display the songs from the library in the same order or in a random order. The user will also be able to create a playlist from songs in the library. They will be able to display the name of the playlist and the songs from the playlist in the same order or in a random order.

## Requirements
The library of songs stored is the ```songs.txt``` file. They should be loaded and saved into the program only once, at the beginning. If a playlist was created it should be saved only once, at the end after the user exits (so the last playlist created is what's saved).  

All opening and closing of files **must be done in the main function**.   

In addition to the main function, there must be at least 4 additional functions. 

**TIPS!**
1. I modified the load strings function from Checkpoint 1
2. I used two of the string functions from Checkpoint 1
3. I created four new functions  
  a. one for outputting songs  
  b. one for outputting random songs  
  c. one for creating a playlist  
  d. one for a menu  
4. I call many of these functions from within other functions (not just in the main)

### Example Program Execution
***Here are examples of how the program should run.***  
![image](https://user-images.githubusercontent.com/2504089/235270429-5890229a-f4ab-4a31-b239-3082f56dafe6.png)
![image](https://user-images.githubusercontent.com/2504089/235269804-baec00fe-9d4f-4c33-ad52-75d881e472f7.png)
![image](https://user-images.githubusercontent.com/2504089/235269869-d2693119-0344-47b1-970e-6dce0dc64908.png)


### Extra Credit
These features will not be considered for extra credit ***ONLY*** if the required functionality is completely implemented:  
1. (10%) The user can create and display multiple playlists  
2. (20%) Any playlist the user creates will be saved and available to see the next time the user opens the app

## Submission details
### It will be easier for one student to manage the repository. 
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone_URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “a descriptive message!”
git push
```

## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
