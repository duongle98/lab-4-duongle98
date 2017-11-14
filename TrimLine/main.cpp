#include <iostream>
#include <string>

using namespace std;

int main()
// Split the text into two pieces with the first piece has up to 72 characters.
{
	string str;
	int width = 72;
	getline(cin,str);
	string one = str.substr(0,width);
	int found = one.rfind(' ');
	if (found!=string::npos){
		cout << one.substr(0,found) << endl;
		cout << str.substr(found+1) << endl;
	}
	else
		cout << str << endl;
	return 0;
}
