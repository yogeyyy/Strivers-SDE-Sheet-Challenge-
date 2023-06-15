#include <bits/stdc++.h>
using namespace std;

void reverseVector(vector<int> &nums, int i, int n){
	int idx = n-1;
	for (i; i < n-i/2; ++i)
	{
		swap(nums[i], nums[idx]);
		idx--;
	}
}

void nextPermutation(vector<int>& nums) {

		int bp = -1;
        for (int i = nums.size()-2; i >= 0 ; --i)
        {
        	if (nums[i] < nums[i+1])
        	{
        		bp = i;
        		break;
        	}
        }

        if (bp != -1)
        {
        	int min = bp+1;
        	for (int i = bp+1; i < nums.size(); ++i)
        	{
        		if (nums[i] < nums[min])
        		{
        			min = i;
        		}
        	}

        	swap(nums[min],nums[bp]);

        	reverseVector(nums,bp+1,nums.size());
        }
        else {
        	reverseVector(nums,0,nums.size());
        }
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

	nextPermutation(arr);

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << endl;
	}

	return 0;
}