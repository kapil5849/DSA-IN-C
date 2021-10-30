

// calculate the minmum sum of k...

#include <iostream>
using namespace std;
int minSum(int arr[], int n, int k)
{
    if (n < k) {
		return -1;
	}
    int min_sum = 0;
	for (int i = 0; i < k; i++)
		min_sum += arr[i];

	
	int window_sum = min_sum;
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k];
		min_sum = min(min_sum, window_sum);
	}

	return min_sum;
}


int main()
{
	int arr[] = { -2,10,1,3,2,-1,4,5 };
	int k = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << minSum(arr, n, k);
	return 0;
}
