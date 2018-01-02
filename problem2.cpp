#include <iostream>
#include <vector>
#include <string>

int main ()
{

int FibTerm = 1;
int FibTermLast = 1;
int FibTermNext;
int rem2 ;

int SumOfEvens = 0;

while (FibTerm <= 4000000)
{

	//std::cout<<"SumOfEvens ";
	//std::cout <<SumOfEvens<<".\n";


	rem2 = FibTerm%2;


	//std::cout<<"FibTerm ";
	//std::cout <<FibTerm<<".\n";

	//ste::cout<<"rem2 ";
	//std::cout <<rem2<<".\n";


	if ( rem2 == 0)
	{
		SumOfEvens = SumOfEvens + FibTerm;
	}

	FibTermNext = FibTerm + FibTermLast;

	FibTermLast = FibTerm;
	FibTerm = FibTermNext;

	//std::cout<<"FibTerm ";
	//std::cout <<FibTerm<<".\n";

}

std::cout<<"SumOfEvens = ";
std::cout <<SumOfEvens<< ".\n";

return SumOfEvens;
}