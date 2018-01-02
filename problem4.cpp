#include <iostream>
#include <vector>
#include <string>


int main (){

int biggest;

std::cout<<"Input the largest integer under which to fnd the greatest palindrome multiple: ";
std::cin>>biggest;

int iter = biggest;
int jter = 0;
int kter = 0;

long int LargestPalindrome = 0;
long int product;
long int revnum;
int rem;

bool ispalindrome;

//std::cout<<"biggest "<<biggest<<"\n";

for(iter;iter >= 1;--iter){
	jter = iter;
	for(jter;jter>=1;--jter){

			product = iter*jter;

			kter = product;
			revnum = 0;
			//std::cout<<"iter "<<iter<<"\n";
			//std::cout<<"jter "<<jter<<"\n";
			//std::cout<<"kter "<<kter<<"\n";

			while(kter!=0){
				rem = kter % 10;
				revnum = revnum*10+rem;

				kter /=10;
			}
			if (revnum == product){
				ispalindrome = true;
				//std::cout<<"ispalindrome = true \n";
				//std::cout<<"product = "<<product<<"\n \n";
			}else{
				ispalindrome =false;
			}

		if (product>LargestPalindrome && ispalindrome == true){
			LargestPalindrome = product;
		}

	}
}

std::cout<<"LargestPalindrome = "<<LargestPalindrome<<"   \n";
	return 0;
}