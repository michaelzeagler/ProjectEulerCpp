#include <iostream>
#include <vector>
#include <string>

int main ()
{

std::cout<<"Input ii[09o/ bbb/nteger:";
//long long int Constraint = 600851475143; 
long long int Constraint;
std::cin >> Constraint;
					  
long long int remIter;
long long int remPrime;
long long int LargestPrimeFactor = Constraint;

long long int iter = Constraint-1;
long long int jter;

bool iterPrime;

for(iter;iter>=2;--iter)
{

	remIter = Constraint % iter;

	//std::cout<<"iter = "<<iter<<"\n";
	//std::cout<<"remIter = "<<remIter<<"\n";
	
	
	if(remIter == 0){

		jter = iter-1;

		iterPrime = true;

		for(jter;jter>=2;--jter)
		{
			
			remPrime = iter % jter;

			//std::cout<<"remPrime = "<<remPrime<<"\n";

			if(remPrime == 0)
			{
				iterPrime = false;
				
				break;
			}
		}
	}

	if(iterPrime == true)
	{
		LargestPrimeFactor = iter;
		break;
	}
}

std::cout<<"LargestPrimeFactor = ";
std::cout <<LargestPrimeFactor< "  \n \n";

return 0;
}