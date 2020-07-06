#include <iostream.h>
#include<stdlib.h>
using namespace std;
// Function to print all Quadruplet present in an array with given sum
void quadTuple(int arr[], int n, int sum)
{
	// sort the array in ascending order
	std::sort (arr, arr + n);

	// check if Quadruplet is formed by arr[i], arr[j] and a pair from
	// sub-array arr[j+1..n)
	for (int i = 0; i <= n - 4; i++)
	{
		for (int j = i + 1; j <= n - 3; j++)
		{
			// k stores remaining sum
			int k = sum - (arr[i] + arr[j]);

			// check for sum k in sub-array arr[j+1..n)
			int low = j + 1, high = n - 1;

			while (low < high)
			{
				if (arr[low] + arr[high] < k)
					low++;

				else if (arr[low] + arr[high] > k)
					high--;

				// Quadruplet with given sum found
				else
				{
					cout << "(" << arr[i] << " " << arr[j] << " " <<
							arr[low] << " " << arr[high] << ")\n";

					low++, high--;
				}
			}
		}
	}
}

// main function
int main()
{
	int arr[] = { 2, 7, 4, 0, 9, 5, 1, 3 };
	int sum = 20;

	int n = sizeof(arr) / sizeof(arr[0]);

	quadTuple(arr, n, sum);

	return 0;
}