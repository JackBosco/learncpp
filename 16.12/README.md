# 16.12 Stack with Vector

(Lesson)[https://www.learncpp.com/cpp-tutorial/stdvector-and-stack-behavior/]

### Goal
Write a program that pushes and pops values, and outputs the following sequence:
```
       (Stack: empty)
Push 1 (Stack: 1)
Push 2 (Stack: 1 2)
Push 3 (Stack: 1 2 3)
Pop    (Stack: 1 2)
Push 4 (Stack: 1 2 4)
Pop    (Stack: 1 2)
Pop    (Stack: 1)
Pop    (Stack: empty)
```
### CODE

Made a class representing a stack implementing ` push()` and `pop()`.

### Result

Got desired output. Constant time push and pop operations.
