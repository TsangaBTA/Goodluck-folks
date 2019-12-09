
#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h> // time
#include <string>

int main ()
{
  std::vector<int> mainNumbers;
  std::vector<int> luckystars;

  // set some values (from 1 to 50)
  for (int i=1; i<=50; i++) mainNumbers.push_back(i);

 // set some values (from 1 to 12)
  for (int i=1; i<=12; i++) luckystars.push_back(i);

  // erase the 6th element
  // mainNumbers.erase (mainNumbers.begin()+5);

int seed = 0;

	srand (time(NULL)); seed = rand()%50; 
	std::cout<< mainNumbers[seed]<<std::endl;
	mainNumbers.erase (mainNumbers.begin()+(seed));	

	srand (time(NULL)); seed = rand()%49; 
	std::cout<< mainNumbers[seed]<<std::endl;
	mainNumbers.erase (mainNumbers.begin()+(seed));

	srand (time(NULL)); seed = rand()%48; 
	std::cout<< mainNumbers[seed]<<std::endl;
	mainNumbers.erase (mainNumbers.begin()+(seed));

	srand (time(NULL)); seed = rand()%47; 
	std::cout<< mainNumbers[seed]<<std::endl;
	mainNumbers.erase (mainNumbers.begin()+(seed));

	srand (time(NULL)); seed = rand()%46; 
	std::cout<< mainNumbers[seed]<<std::endl;
	mainNumbers.erase (mainNumbers.begin()+(seed));

	std::cout<<"*"<<std::endl;
	std::cout<<"*"<<std::endl;

	srand (time(NULL)); seed = rand()%12; 
	std::cout<< luckystars[seed]<<std::endl;
	luckystars.erase (luckystars.begin()+(seed));

	srand (time(NULL)); seed = rand()%11; 
	std::cout<< luckystars[seed]<<std::endl;
	luckystars.erase (luckystars.begin()+(seed));


  // erase the first 3 elements:
  // mainNumbers.erase (mainNumbers.begin(),mainNumbers.begin()+3);

  std::cout << "mainNumbers NOW contains:";
  for (unsigned i=0; i<mainNumbers.size(); ++i)
    std::cout << ' ' << mainNumbers[i];
  std::cout << '\n';

	 std::cout << "luckystars NOW contains:";
  for (unsigned i=0; i<luckystars.size(); ++i)
    std::cout << ' ' << luckystars[i];
  std::cout << '\n';

	std::cout<< "ENTER ANY KEY TO EXIT"<<std::endl;

	std::string enterAnything;
	std::cin>> enterAnything;

  return 0;
}