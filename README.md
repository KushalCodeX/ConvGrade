# GPA to Letter Grade (C Program)

This C program calculates and outputs a letter grade based on a numeric GPA input. It replaces long, repetitive conditional logic with a clean array-based approach, improving readability, maintainability, and scalability.

## Overview

The program maps a GPA value to its corresponding letter grade using parallel arrays and a loop. This design makes it easy to adjust grading thresholds or add new grades without modifying complex conditional structures.

## Features

* *Input validation*: Ensures the GPA is within the valid range of 0.0 to 4.0
* *Array-based grade mapping*: Uses parallel arrays to associate GPA thresholds with letter grades
* *Loop-driven logic*: Eliminates repetitive if-else statements and simplifies updates
* *Clear output*: Displays the calculated letter grade based on the entered GPA

## How It Works

1. The user inputs a GPA value
2. The program validates the input range
3. A loop iterates through predefined GPA thresholds
4. The corresponding letter grade is printed once a match is found

## Why This Approach

* Easier to maintain and extend
* More readable than chained conditionals
* Scales well if grading rules change

## Requirements

* C compiler (GCC, Clang, or equivalent)

## Usage

bash
gcc grade.c -o grade
./grade


Enter a GPA when prompted to receive the corresponding letter grade.

## Example Output


Enter GPA: 3.6
Grade: A
