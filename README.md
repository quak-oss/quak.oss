# quaklang

**Quak** is a programming language that aims to combine **Python-like** concise code,
while maintaining blazing fast runtime of **C-like** compiled languages.

> Started: September 20, 2025  
> Current Version: b0.1 (Bootstrap Phase)  
> Check the [contribution guide](https://github.com/quak-oss/quaklang/blob/main/CONTRIBUTING.md) for details on how to contribute.

---

### Example 1 : Input/Output

-  This simple program takes input, prints a message, and returns `0`:

```quak

int.main():

    inp.x    // Creates an integer variable and initializes it to 0 automatically

    print("int.x was the input")  // Print statement

| 0; // Return statement

```
```quak
Input : 3
Output : "3 was the input"
```

### Example 2 : Range based loop
- This example explains the use of loops in quak:

```quak

int.main():

    inp.x

// Syntax of an inclusive range based loop, runs from i = 0 to i = x

    for(i =] x):
        print("int.i");

| 0;

```
```quak
Input : 3
Output : 0 1 2 3 
