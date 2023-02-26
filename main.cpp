#include <iostream>
#include <string>
#include <vector>


int main() {

	std::string str;
	int counterBrackets = 0;
	int counterSymbols = 0;
	std::vector <int>  vecSymbols;
	
	std::cout << "Enter a line with brackets (): \nenter -> ";
	getline(std::cin, str);

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(')
			counterBrackets++;
		else if (str[i] == ')') {
			vecSymbols.push_back(counterSymbols);
			counterSymbols = 0;
		}
		else
			counterSymbols++;
	}

	std::cout << "The number of pairs of brackets = " << counterBrackets << '\n';
	std::cout << "The number of symbols = " << counterSymbols << '\n';

	for (auto el : vecSymbols)
		std::cout << el << ' ';

	return 0;
}