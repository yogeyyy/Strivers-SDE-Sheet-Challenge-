#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {

	int n = prices.size();
	int mini = 0;
	int maxiprofit = 0;

	for (int i = 0; i < n; ++i)
	{
		if (prices[i] < prices[mini])
		{
			mini = i;
		}
		if (prices[i]-prices[mini] > maxiprofit)
		{
			maxiprofit = prices[i]-prices[mini];
		}
	}
	return maxiprofit;
}

int main() {

	int n,q;
	cin >> n;

	vector <int> arr;

	for (int i = 0; i < n; ++i)
	{
		cin >> q;
		arr.push_back(q);
	}

	int profit = maxProfit(arr);

	cout << profit;


	return 0;
}