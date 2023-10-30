# Score Calculation Program README

This program is a simple command-line application that allows you to enter scores and calculate various statistics based on those scores.

## How to Use

1. Compile and run the program using the following commands:
   - To compile the program:
     ```
     g++ -o .\bin\build.exe .\src\main.cpp .\src\calculations.cpp .\src\menu.cpp
     ```
   - To run the compiled program:
     ```
     .\bin\build.exe
     ```
2. Follow the on-screen menu options to enter scores or perform calculations.
3. Exit the program when you're done.

## Known Issues

- No ability to see scores after entering data.
- No ability to save data at this time.

## Example Test Data and Expected Output

Here's an example of test data and the expected output:

### Test Data

| Score 1 | Score 2 | Score 3 | Score 4 | Score 5 | Score 6 |
|---------|---------|---------|---------|---------|---------|
| 80.5    | 75.2    | 90.0    | 88.3    | 92.7    | 78.9    |

### Expected Output

1. Calculate and Display:

   - Average: 83.8333
   - Variance: 41.1667
   - Standard Deviation: 6.41613
   - Range: 17

## Author

Gage Miller

Feel free to use and modify the code as needed.