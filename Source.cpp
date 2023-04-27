#include <iostream>
#include <windows.h>
#include <locale.h>
#include <vector>
#include <algorithm>





int main(int argc, char** argv)
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::vector<int> vect{ 4, 7, 9, 14, 12 };
	std::vector<int>::iterator it = vect.begin();
	
	std::for_each(vect.cbegin(), vect.cend(), [&it](const auto temp) 
		{
			if (temp % 2 != 0)
					{			
						*it *= 3;
					}
			it++;
		}
	);



	std::cout << "\n";

	for (auto a: vect)
	{
		std::cout << a << " ";
	}


	return 0;
}
