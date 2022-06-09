# Timer Object for CPP

## Introduction
- Include timer.h in your cpp file, and create a object of class timer, select the time interval default 1 second.
- Use the can use function that returns a bool to know wether enough time has passed.
- Example use given in test.cpp, the program prints 1 to 60, 1 second each to the terminal.
- Compile test.cpp with 
  - ```gcc test.cpp -o test.exe -I include/ -lstdc++```

## Other Use cases for this object
- Use to moderate number of jumps made by a player in certain amount of time in a game
- Use it to set firerate on automatic guns in games
- Use it to limit messages sent via bots to prevent spam
- Use it to limit request rates to APIS as most of them have restrictions. 