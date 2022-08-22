# Timer Object for CPP

## Usage
### C++
- Put the timer.h file into your include forlder.
- Include timer.h in your cpp file, and create a object of class timer, select the time interval default 1 second.
- Use the can use function that returns a bool to know wether enough time has passed.
- Example use given in test.cpp, the program prints 1 to 60, 1 second each to the terminal.
- Compile test.cpp with 
  - ```gcc test.cpp -o test.exe -I include/ -lstdc++```
  
### Python
- Place the py file in same directory as your code
- Import the Timer class into your code
- Create a timer object, usage similar to C++
- For example refer to the example under the class or from c++

## A few Use cases for this object
- Use to moderate number of jumps made by a player in certain amount of time in a game
- Use it to set firerate on automatic guns in games
- Use it to limit messages sent via bots to prevent spam. [Use Example](https://github.com/MiyukiKun/FastTelethonhelper/blob/49e9c5005ff48d07b639fc62a5da5d4688cabf00/FastTelethonhelper/__init__.py#L86)
- Use it to limit request rates to APIS as most of them have restrictions. 
- Use it to slow down at which gesture is detected at in a gesture recognition module [Use Example](https://github.com/Majethia/AR-CONTROLLED-CAR/blob/main/project.py#L53)
