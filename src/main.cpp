/** 
 * @file main.cpp
 * @author Martin Ukrop
 * @licence MIT Licence
 */

#include <iostream> 
#include "fact.h"

int main() {
	std::cout << "Hello OpenLab!" << std::endl;
	std::cout << "fact(6) = " << MyMath::factorial(6) << std::endl;
	return 0;
}
