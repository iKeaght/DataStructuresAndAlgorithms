#include "Utils.h"
namespace Utils {

	void PrintArray(int array[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << "  " << array[i];

		} std::cout << "\n";
	}
}
