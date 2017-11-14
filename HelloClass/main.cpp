#include <iostream>
#include <string>

using namespace std;

int main()
// Saying 'hello' to a list of names.
{
	string name;
	while (getline(cin, name)){
		// Getting names and ouput hello to it.
		cout << "Hello, " << name << "." << endl;
	}
	return 0;
}
