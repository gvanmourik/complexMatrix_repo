#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>
#include <vector>

void printComplexVector( std::vector<std::complex<double>> );
 
int main()
{
    	using namespace std::complex_literals;
    	
	std::cout << std::fixed << std::setprecision(1);
    	std::complex<double>z1;
	
	z1 = 1i * 1i;     // imaginary unit squared
    	std::cout << "i * i = " << z1 << '\n';
 	
	z1 = std::pow(1i, 2); // imaginary unit squared
	std::cout << "pow(i, 2) = " << z1 << '\n';
 
    	double PI = std::acos(-1);
    	z1 = std::exp(1i * PI); // Euler's formula
    	std::cout << "exp(i * pi) = " << z1 << '\n';
 
    	z1 = 1. + 2i;
	std::complex<double> z2 = 1. - 2i; // conjugates
    	std::cout << "(1+2i)*(1-2i) = " << z1*z2 << std::endl << std::endl;

	
	// VECTOR TEST WITH COMPLEX	
	std::vector<std::complex<double>> r1(2); //row1 with length 2
	std::vector<std::complex<double>> r2(2); //row2 same length as row1
	
	r1[0] = z1;
	r1[1] = 0;
	r2[0] = 0;
	r2[1] = z2;

	printComplexVector(r1);
	printComplexVector(r2);	

	return 0;
}

void printComplexVector( std::vector<std::complex<double>> srcVector )
{
	int vectorLen = srcVector.size();
	std::cout << "[ ";
	for (int i = 0 ; i < vectorLen ; i++)
	{
		std::cout << srcVector[i]; 
	}
	std::cout << " ]" << std::endl;
}
