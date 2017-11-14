#include <iostream>

using namespace std;

int convert(int temp){
// A functiont to convert C to F.
	float res = temp*1.8+32;
	return res;
}

int main()
// Making a conversion chart from C to F.
{
	cout << "Temperature Conversion Chart" <<endl; //Print the heading.
	cout << "deg C\tdeg F" << endl;
	for (int i = 0; i<=100; i+=10){
		//Print 11 rows of C and F.
		cout << i<< "\t" << convert(i) <<endl;
	}
	return 0;
}
