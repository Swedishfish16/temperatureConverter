#include <iostream>

int main() {

	bool done{ false };
	char choice{};
	double celcius{};
	double fahrenheit{};
	double result{};
	char restart{};
	bool restartDone{ false };
	
	while (!done) {
		std::cout << "Enter C for Celcius OR F for fahrenheit: ";
		std::cin >> choice;
		switch (choice) {
			case 'c':
				std::cout << "Please enter number representing celcius: ";
				std::cin >> celcius;
				result = (celcius * 9 / 5) + 32;
				std::cout << celcius << " degrees C is equal to: " << result << " degrees F\n";
				done = true;
				restartDone = false;
				break;
			case 'C':
				std::cout << "Please enter integer representing celcius: ";
				std::cin >> celcius;
				result = (celcius * 9 / 5) + 32;
				std::cout << celcius << " degrees C is equal to: " << result << " degrees F\n";
				done = true;
				restartDone = false;
				break;
			case 'f' :
				std::cout << "Please enter number representing fahrenheit: ";
				std::cin >> fahrenheit;
				result = (fahrenheit - 32) * 5 / 9;
				std::cout << fahrenheit << " degrees F is equal to: " << result << " degrees C\n";
				done = true;
				restartDone = false;
				break;
			case 'F':
				std::cout << "Please enter number representing fahrenheit: ";
				std::cin >> fahrenheit;
				result = (fahrenheit - 32) * 5 / 9;
				std::cout << fahrenheit << " degrees F is equal to: " << result << " degrees C\n";
				done = true;
				restartDone = false;
				break;
			default:
				std::cout << "Illegal choice, please try again.\n";
				done = false;
				restartDone = true;
				break;
		}
		while (!restartDone) {
			std::cout << "Would you like to make another calculation? Enter Y for Yes, or N for no: ";
			std::cin >> restart;
			switch (restart) {
			case 'y':
				done = false;
				restartDone = true;
				break;
			case 'Y':
				done = false;
				restartDone = true;
				break;
			case 'N':
				restartDone = true;
				done = true;
				break;
			case 'n':
				restartDone = true;
				done = true;
				break;
			default:
				std::cout << "Illegal response. Please try again.\n";
				std::cin.clear();
				std::cin.ignore();
				restartDone = false;
				done = true;
				break;
			}
		}
	}

	return 0;
}
