#include <bits/stdc++.h>
using namespace std;

// void sortColors(vector<int>& nums) {

// 	int a = 0, b = 0, c = 0;

// 	int n = nums.size();
// 	for (int i = 0; i < n; ++i)
// 	{
// 		/* code */
// 		if (nums[i] == 0)
// 		{
// 			a++;
// 		}
// 		else if(nums[i] == 1) {
// 			b++;
// 		}
// 		else if(nums[i] == 2) {
// 			c++;
// 		}
// 	}

// 	for (int i = 0; i < n; ++i)
// 	{
// 		if (i <= a-1)
// 		{
// 			nums[i] = 0;
// 		}
// 		else if (i <= a-1 + b) {
// 			nums[i] = 1;
// 		}
// 		else if (i <= a+b+c-1) {
// 			nums[i] = 2; 
// 		}
// 	}

// }

void sortColors(vector<int>& nums) {
	int n = nums.size();
	int low = 0, mid = 0, high = n-1;

	for (int i = 0; i < n; ++i)
	{
		if (mid <= high)
			{
				if (nums[mid] == 0)
			{
				swap(nums[mid], nums[low]);
				low++;
				mid++;
			}
			else if (nums[mid] == 1){
				mid++;
			}
			else if (nums[mid] == 2) {
				swap(nums[mid], nums[high]);
				high--;
			}
		}
		else {
			break;
		}
		
	}
}

int main () {

	int n,q;
	cin >> n;

	vector <int> arr;

	for (int i = 0; i < n; ++i)
	{
		cin >> q;
		arr.push_back(q);
	}

	sortColors(arr);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << arr[i] << " ";
	}

	return 0;
}