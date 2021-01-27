#include <iostream>
// Sorts an array from lowest to greatest
void bubbleSort(int *unsortedArray, const int& ARRAY_SIZE);
// Display an array to user
void displayArray(int *arr, const int& ARRAY_SIZE);

int main() 
{
	const int ARRAY_SIZE = 10;
	int randomArray[ARRAY_SIZE] = {10, 9 , 8, 7, 6, 5, 4, 3, 2, 1};

	std::cout << "Unsorted Array: ";
	displayArray(randomArray, ARRAY_SIZE);

	std::cout << "Calling bubble sort algorithm.\n";
	bubbleSort(randomArray, ARRAY_SIZE);

	std::cout << "\nSorted Array: ";
	displayArray(randomArray, ARRAY_SIZE);
}

void bubbleSort(int *unsortedArray, const int& ARRAY_SIZE)
{
	// placeholder for swapping elements
	int tempElement = 0;

	// decrement the end condition of each pass of the nested loop by 1.
	for (int end = ARRAY_SIZE; end > 1; --end)
	{
		// display to the user what pass the bubble sort algorithm is on
		switch (ARRAY_SIZE-end+1)
		{
			case 1: 
				std::cout << "\n" << ARRAY_SIZE-end+1 << "st pass.\n"; 
				break;
			case 2: 
				std::cout << "\n" << ARRAY_SIZE-end+1 << "nd pass.\n"; 
				break;
			case 3: 
				std::cout << "\n" << ARRAY_SIZE-end+1 << "rd pass.\n"; 
				break;
			default: 
				std::cout << "\n" << ARRAY_SIZE-end+1 << "th pass.\n"; 
				break;
		}
		
		for (int i = 0; i < end-1; ++i)
		{
			if (unsortedArray[i] > unsortedArray[i+1])
			{
				tempElement = unsortedArray[i];
				unsortedArray[i] = unsortedArray[i+1];
				unsortedArray[i+1] = tempElement;
			}
		}
		// display the array to the user after each pass.
		displayArray(unsortedArray, ARRAY_SIZE);
	}
}

void displayArray(int *arr, const int& ARRAY_SIZE)
{
	std::cout << "{";
	for (int i = 0; i < ARRAY_SIZE-1; ++i)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << arr[ARRAY_SIZE-1] << "}" << std::endl;
}


