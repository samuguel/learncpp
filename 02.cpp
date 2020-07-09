#include <iostream>
#include <limits>
int main(){
	while(1){
		std::cout << "Hello Wolrd" << '\n';
		std::cin.clear();	// reset any error flags
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');	// ignore any character in the input buffer until we find a newline
		std::cin.get();	// get one more char from the user
	}
}
