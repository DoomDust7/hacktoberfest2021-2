// C++ program to Replace each element
// by the difference of the total size
// of the array and its frequency
//Time Complexity – O(N)
#include <bits/stdc++.h>
using namespace std;

// Function to replace the elements
void ReplaceElements(int arr[], int n)
{
	// Hash map which will store the
	// frequency of the elements of the array.
	unordered_map<int, int> mp;

	for (int i = 0; i < n; ++i)

		// Increment the frequency
		// of the element by 1.
		mp[arr[i]]++;
	

	// Replace every element by its frequency
	for (int i = 0; i < n; ++i)
		arr[i] = n - mp[arr[i]];

}

// Driver code
int main()
{
	int arr[] = { 1, 2, 5, 2, 2, 5, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);

	ReplaceElements(arr, n);

	// Print the modified array.
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}
//Contributed by DoomDust7
