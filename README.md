# Calendar Program

This program generates a calendar for a specified year in a simple text-based format. It highlights leap years, adjusts the number of days in February accordingly, and calculates the first weekday of the year using a formula based on the Gregorian calendar rules.

## Features

- Displays the calendar for all 12 months of a given year.
- Handles leap years and adjusts February's days.
- Aligns the calendar with the correct weekdays.
- User-friendly and easy-to-read output.

## How It Works

1. The program takes a year as input from the user.
2. Checks if the input year is a leap year:
   - A year is a leap year if it is divisible by 4 and (not divisible by 100 or divisible by 400).
3. Calculates the starting weekday of the year using:
   ```cpp
   WeekDay = ((Year * 365) + ((Year - 1) / 4) - ((Year - 1) / 100) + ((Year - 1) / 400)) % 7;
   ```
4. Iterates through each month, displaying the days of the month aligned with the correct weekday headers (Sun, Mon, Tue, etc.).
5. Uses `iomanip` for formatted output (e.g., `setw(6)` ensures proper alignment of days).

## Input
- The user is prompted to enter a year (e.g., 2024).

## Output
- The program displays the calendar for all 12 months of the input year in the console.
- Each month includes:
  - Month name.
  - Weekday headers.
  - Aligned days of the month.

## Sample Output
```
                         ------------
                         | Calendar |
                         ------------

 Enter Year : 2024


         January

   Sun   Mon   Tue   Wed   Thu   Fri   Sat

          1     2     3     4     5     6
    7     8     9    10    11    12     13
    14    15    16    17    18    19    20
    21    22    23    24    25    26    27
    28    29    30    31
```
