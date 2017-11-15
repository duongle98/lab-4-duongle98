#include <iostream>
#include <ctype.h>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

int main()
// Print out all of the printable strings in a binary file.
{
	char word;
	stringstream ss;
	while (cin >> word){
		// Reading one character at a time and check if it is pritable.
		if (isgraph(word) or isspace(word)){
			ss << word;
		}
		else if (word == '\0'){
			if (ss.str().empty())
				continue;
			cout << ss.str() << endl;
			ss.str("");
		}
		else{
			ss.str("");
		}
	}
}
