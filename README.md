This program reads a list of groceries from a text file and calculates the frequency of each item using a map.  
It uses a menu system with options 1–4. The user can search for a specific item from the text file or display all items as a histogram.  
The program also creates a backup file called frequency.dat.

What I did particularly well in this project was using classes and applying object-oriented programming while also using a map for the first time to search and store data.

To improve my code, I should have kept all input validation in one location instead of having it in multiple places.

The most challenging part of this project was the checkInput() function because I had never used cin.ignore() before.  
I had to learn how it works, what numeric_limits is, and how to clear bad input using cin.clear().  
My usual input validation is using a loop such as while (input != 4), but that does not account for non-numeric input like strings or characters.  
I could have used a try-catch block, but creating a separate function for input validation made the program easier to read and kept main() cleaner.

The tools I used for this project included YouTube, which helped me understand the fundamentals of maps, as well as functions and classes.

From this project, I gained experience using GitHub, creating and using objects, working with maps, writing functions, using pass-by-value and pass-by-reference, performing input validation, and debugging.  
I had read about these concepts in the course material before, but this project helped me strengthen my understanding through hands-on practice.

To make the program maintainable, readable, and adaptable, I used a class structure and added comments to explain the purpose of the code.  
I also avoided putting too much logic inside main(), which makes the program easier to expand and allows future developers to add new functionality more easily.
