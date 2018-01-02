#include <iostream>
#include <vector>

int main ()
{

int SumOfMultiples = 0;
int rem3;
int rem5;

int iter = 1;

for (iter; iter < 1000; ++iter)
{
	rem3 = iter % 3;
	rem5 = iter % 5;

	if ( rem3 == 0 || rem5 == 0)
	{	
		SumOfMultiples = SumOfMultiples + iter;
	}

}
std::cout<<"SumOfMultiples ";
std::cout <<SumOfMultiples<< ".\n";

return 0;
}