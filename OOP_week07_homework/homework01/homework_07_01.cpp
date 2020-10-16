#include <fstream>
#include <iostream>
#include <string>

class AnyString {
	std::string anyString;

public:
	AnyString(const std::string& anyString) : anyString(anyString) {}
	std::string getAnyString() {
		return "Stored String :: " + anyString;
	}
	friend std::ostream& operator<<(std::ostream& os, const AnyString& string);
};

std::ostream& operator<<(std::ostream& os, const AnyString& aString) {
	os << "Stored String :: " << aString.anyString;
	return os;
}


int main() {
	std::ofstream out("testOverloding.txt");
	AnyString a("Hello, this is operator overloading test!!!");

	out << a << std::endl;

	return 0;
}