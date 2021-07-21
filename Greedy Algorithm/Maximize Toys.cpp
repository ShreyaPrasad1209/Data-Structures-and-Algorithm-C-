// C++ Program to maximize the number of toys with K amount
#include <bits/stdc++.h>
using namespace std;

// This functions returns the required
// number of toys
int maximum_toys(int cost[], int N, int K)
{
	int count = 0, sum = 0;

	// sort the cost array
	sort(cost, cost + N);
	for (int i = 0; i < N; i++) {

		// Check if we can buy ith toy or not
		if (sum +cost[i] <= K)
		{
			sum = sum + cost[i];
			// Increment count
			count++;
		}
	}
	return count;
}
int main()
{
	int K = 50;
	int cost[] = { 1, 12, 5, 111, 200, 1000, 10, 9, 12, 15 };
	int N = sizeof(cost) / sizeof(cost[0]);

	cout << maximum_toys(cost, N, K) << endl;
	return 0;
}
