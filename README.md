# spikex
A small and fast hex-dump written in pure c.

## Preview
```
0x0     54 68 69 73 20 69 73 20 61 20 73 6d 61 6c 6c 20 This.is.a.small.
0x10    74 65 73 74 20 77 69 74 68 20 74 68 65 0a 73 70 test.with.the.sp
0x20    69 6b 65 78 20 68 65 78 20 64 75 6d 70 2e 20 3a ikex.hex.dump..:
0x30    29 0a                                           )...............
```

## Compile
```bash
gcc main.c -o spikex
```

## Usage
```bash
./spikex [Filename] [Number of chars per line]
```
