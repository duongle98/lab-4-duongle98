#include <iostream>

using namespace std;

int main()
// Determining if the inputted temperature is whether hot or cold.
{
	int threshold = 25; //assigning the threshold.
	float temp;
	cout << "What is the current temperature (in C)? "; 
	cin >> temp; //getting the current temperature.
	if (temp > threshold) //comparing and output the message about the inputted temperature.
		cout << "Oh, that is hot" << endl;
	else
		cout << "Oh, that is cold" << endl;
	return 0; 
}