Dynamic Array Implementation in C (Without malloc)
📌 Overview

This project demonstrates how to implement a dynamic array–like structure in C using:

A fixed-size array

Manual size tracking

Element shifting

Basic array operations

No struct, no malloc, no realloc — only core C concepts.

✨ Features

The following operations are supported:

Push Back – Add element to the end

Pop Back – Remove last element

Insert at Index – Add element at any position

Delete at Index – Remove element from any position

Print Array – Display current elements

🛠 Functions Implemented
Function Description
pushBack() Adds a value to the end
popBack() Removes last element
insertFromIndex() Inserts at a given index
deleteAtIndex() Deletes from a given index
printArr() Prints all elements
🧠 How It Works

The array uses a fixed memory size (SIZE = 100)

currLen tracks how many elements are valid

Elements are shifted manually when inserting or deleting

Removing the last element only reduces currLen

The array itself does not track size — the program does

⚠️ Limitations

Not truly dynamic (no memory reallocation)

Maximum size is fixed

No automatic resizing

Manual size updates required

This is for learning purposes and understanding how dynamic arrays work internally.

▶️ How to Run

Compile:

gcc -o filename filename.c

Run:

./filename

Enter numbers

Enter -1 to stop input

🚀 Next Improvements

Use struct

Implement real dynamic resizing with malloc / realloc

Add bounds-safe input handling

Make it generic (support other data types)
