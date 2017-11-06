= Overview =

Create a program that reads in line of text and trims it so that it fits in 72 characters.

= Instuctions =

The program should read a line of input from standard input and split it into two pieces, split on a space character,
with the first piece as long as possible up to 72 characters. If there are no spaces in the first 72 characters, just print the
line as is.

Several functions in the string class will be helpful, including:

* getline (http://www.cplusplus.com/reference/string/string/getline/)
* substr (http://www.cplusplus.com/reference/string/string/substr/)
* find (http://www.cplusplus.com/reference/string/string/find/)
* rfind (http://www.cplusplus.com/reference/string/string/rfind/)

= Example =
```
This line is so long that the moon will fall out of the sky before an ox can read it to its very, bitter end.
This line is so long that the moon will fall out of the sky before an
ox can read it to its very, bitter end.
```

= Grading =

This program is worth 15 points.

*    Get 2 points for including appropriate comments.
*    Get 2 points for using C++ IO Streams and getline for your input and output.
*    Get 2 points for using a variable to store the desired width (72) and using that variable instead of 72 throughout the code.
*   Get 2 points for extracting the first 73 characters of the input.
*    Get 2 points for finding the last space in the first 73 characters of input. 
*    Get 2 points for writing everything up to (not including) the last space in the 73 characters to output, followed by an endl.
* Get 2 points for extarcting everything in the original input that follows the space found above.
* Get 1 point for printing the remainder of the input to output on its own line.
