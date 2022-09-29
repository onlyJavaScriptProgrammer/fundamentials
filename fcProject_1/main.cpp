#include <iostream>
#include <cmath>

void printRect() {

	bool isDoingWhile = true;		
	int countRows = 0;				

	while (isDoingWhile)			
	{
		std::cout << "AAAAAAAA\n";	
		countRows++;				

		if (countRows == 5)			
		{
			isDoingWhile = false;	
		}
	}

}

void printDoubleV() {
	
	std::cout << "*     *     *\n";
	std::cout << " *   * *   *\n";
	std::cout << "  * *   * *\n";
	std::cout << "   *     *\n";

	std::cout << "" << std::endl;
}

double resultOfExpression(int a, int b) {
	return (a + 4 * b) * (a - 3 * b) + pow(a, 2);
}

int main() {

	std::cout << "This is double V" << std::endl;
	std::cout << "" << std::endl;

	printDoubleV();

	std::cout << "This is rectangle fill words A" << std::endl;
	std::cout << "" << std::endl;

	printRect();

	std::cout << "" << std::endl;

	std::cout << "Result 1 + 2 - 4 = " << 1 + 2 - 4;

	std::cout << "" << std::endl;

	double outputResult = resultOfExpression(2, 3);
	std::cout << "Result of expression (a + 4b)(a - 3b) + a^2 = " << outputResult << std::endl;

	double sum = 1.0 / 2 + 1.0 / 4;
	std::cout << "Result of expressin 1/2 + 1/4 = " << sum << std::endl;

	return 0;						
}