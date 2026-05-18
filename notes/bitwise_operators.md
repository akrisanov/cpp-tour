# Bitwise Logical Operators

## TLDR

```cpp
permissions |= Write;   // add flag
permissions &= ~Write;  // remove flag
permissions ^= Write;   // toggle flag
permissions & Write;    // check flag
```

## Bitwise operators work with individual bits

Bitwise operators operate on the binary representation of integers.

```cpp
unsigned int x = 6; // binary: 0110
unsigned int y = 3; // binary: 0011
```

## x & y — bitwise AND

Keeps a bit only if it is 1 in both numbers.

```plain
  0110   // 6
& 0011   // 3
= 0010   // 2
```

So:

```cpp
6 & 3 // 2
```

Common use: checking flags.

```cpp
const int Read  = 1; // 0001
const int Write = 2; // 0010
const int Exec  = 4; // 0100

int permissions = Read | Write; // 0011

if (permissions & Read) {
    std::cout << "Can read\n";
}
```

## x | y — bitwise OR

Sets a bit if it is 1 in at least one number.

```plain
  0110   // 6
| 0011   // 3
= 0111   // 7
```

So:

```cpp
6 | 3 // 7
```

Common use: combining flags.

```cpp
int permissions = Read | Write;
```

## x ^ y — bitwise XOR

Sets a bit if the bits are different.

```plain
  0110   // 6
^ 0011   // 3
= 0101   // 5
```

So:

```cpp
6 ^ 3 // 5
```

Truth table for one bit:

```plain
0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0
```

Common use: toggling flags.

```cpp
permissions ^= Write; // toggles the Write permission
```

If Write was enabled, it becomes disabled. If it was disabled, it becomes enabled.

## ~x — bitwise NOT

Inverts all bits.

```plain
x  = 00000110
~x = 11111001
```

But be careful: the actual result depends on the integer type width.

```plain
unsigned char x = 6;  // 00000110
unsigned char y = ~x; // 11111001, which is 249
```

With normal int, ~6 often becomes -7 because of two’s complement representation:

```cpp
std::cout << ~6; // usually -7
```

For beginners, ~ is most useful with masks:

```cpp
permissions &= ~Write; // remove Write flag
```
