# NPTEL-Introduction-to-Programming-in-C-Assignment-5-Question-1
NPTEL Introduction to Programming in C Assignment 5 Question 1

# Question 1
The Collatz function is defined for a positive integer n as follows.
```
f(n) = 3n+1     if n is odd
        n/2     if n is even
```

We consider the repeated application of the Collatz function starting with a given integer n, as follows:

f(n), f(f(n)), f(f(f(n))), …

It is conjectured that no matter which positive integer n you start from, this sequence eventually will have 1 in it. It has been verified to hold for numbers up to 5 × 2<sup>60</sup>  [Wikipedia: Collatz Conjecture].

e.g. If n=7, the sequence is

1. f(7) = 22

2. f(f(7)) = f(22) = 11

3. f(11) = 34

4. f(34) = 17

5. f(17) = 52

6. f(52) = 26

7. f(26) = 13

8. f(13) = 40

9. f(40) = 20

10. f(20) = 10

11. f(10) = 5

12. f(5) = 16

13. f(16) = 8

14. f(8) = 4

15. f(4) = 2

16. f(2) = 1

Thus if you start from n=7, you need to apply f 16 times in order to first get 1.

In this question, you will be given a positive number <= 32,000. You have to output how many times f has to be applied repeatedly in order to first reach 1.

# Sample Input 1
```sh
101
```

# Sample Output 1
```sh
25
```

# Sample Input 2
```sh
100
```

# Sample Output 2
```sh
25
```

# Sample Input 3
```sh
2463
```

# Sample Output 3
```sh
208
```
