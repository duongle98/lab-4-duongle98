## Overview

Create a program that prints all of the strings in a binary file.

## Instuctions

The program should open the file read binary characters from its standard input in order to identify and print possible strings. For this program a
"string" is defined as a sequence of printable characters (not control characters) ending with a 0 byte.

Several different strategies are possible. You could use getline to read a string, using 0 as the terminating character instead of '\n'.
Then, you would scan backwards until you find the first non-printable character.

Alternatively, you could read one character at a time, and if it is printable, add it to a
stringstream (http://www.cplusplus.com/reference/sstream/stringstream/). If you hit a non-printable character, you would need to 
clear the stringstream. If you hit a 0 byte, you would need to output the contents of the stringstream and an endl.

So, what exactly is a printable character? C++ provides some functions to help make that decision. Any character that has a graphical
representation (like '+' or 'H') is printable, and can be identified using the 
isgraph function (http://www.cplusplus.com/reference/cctype/isgraph/). Whitespace characters are also printable, and can be identified
using the isspace function (http://www.cplusplus.com/reference/cctype/isspace/). Alternatively, you can use the not-quite-so-correct
isprint function that will accept graphical characters and a space character, but will fail to recognize strings with tab or newline
characters.

Optionally, you may accept one or more filenames as program arguments instead of reading from standard input. It is actually better to
do this because the file should be opened in binary mode (especially on Windows), which is not possible with standard input. I left this
out of the assignment to keep things relatively simple.

## Example

On Linux/Mac, you can test this program directly. You will need to type CTRL-SHIFT-@ to generate a 0 byte to mark the end of 
strings. You can also try out other non-printable characters by using CTRL with most letter keys. Good luck on Windows.... I am not
sure it can even be done.

To test how your program finds strings in binary files, you will need to redirect input, like so:
```
Debug/Strings < /usr/bin/echo
/lib64/ld-linux-x86-64.so.2
libc.so.6
fflush
strcpy
__printf_chk
setlocale
mbrtowc
strncmp
strrchr
dcgettext
...
```

## Grading

This program is worth 15 points.

*    Get 2 points for including appropriate comments.
*    Get 2 points for using C++ IO Streams for your input and output.
*    Get 2 points for reading some data from standard input.
*   Get 2 points for testing characters to see if they are "printable."
*    Get 2 points for testing for '\0' (NUL, 0) characters.
*    Get 2 points for printing sequences of printable characters.
* Get 2 points for printing only sequences of printable characters ending with a 0 byte.
* Get 1 point for looping over the input file as long as there is valid input.
