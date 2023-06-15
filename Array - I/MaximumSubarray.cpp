#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {

        int n = nums.size();
        int sum = 0;
        int maxsum = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];
            if (sum > maxsum){
                maxsum = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }

        return maxsum;
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

	int sum = maxSubArray(arr);

	cout << sum << endl;

	return 0;
}