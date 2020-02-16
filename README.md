# entropy-analyzer
A binary entropy analyzer in C++

This program was inspired by the binwalk tool for Linux. Using 
```
$ binwalk -E /path/to/file
```
will give you an output that looks like the below in the terminal, plus a nice graph for you to mess around with.
```
DECIMAL       HEXADECIMAL     ENTROPY
--------------------------------------------------------------------------------
0             0x0             Falling entropy edge (0.658753)
1024          0x400           Rising entropy edge (0.974488)
...           ...             ...
```
This project focuses only on this facet of binwalk. It is only an implementation of an entropy analyzer in C++.

## Usage

This program is simple and can only be used in one way:

```
$ entropy-analyzer <filename>
```

Project in early stages