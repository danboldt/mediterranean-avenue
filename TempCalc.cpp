#include <iostream>
using namespace std;


int main() {

	double user_response = -1;
	double temperature = -1;

	cout << "Choose 1 or 2" << endl;
	cout << "1.) Celsius to Fahrenheit?" << endl;
	cout << "2.) Fahrenheit to Celsius?" << endl << endl;

	cin >> user_response;

	while (user_response != 1 && user_response != 2) {

		cout << "Not correct input." << endl;
		cin >> user_response;
		
	}

	cout << "Temperature? ";
	cin >> temperature;

	if (user_response == 1) {

		temperature = temperature * 1.8 + 32;
		cout << temperature << " degrees Fahrenheit." << endl;

	}
	else if (user_response == 2) {

		temperature = (temperature - 32) * (0.556);
		cout << temperature << " degrees Celsius." << endl;

	}
	else {

		cout << "Invalid inputs";

	}

	return 0;
}
