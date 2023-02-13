#include <iostream>
#include <vector>
using namespace std;

int part_sort(int nums[], int l, int r){
	int target = nums[l];
	int m = l;
	while(l < r){
		while(l < r && nums[r] >= target) --r;
		nums[m] = nums[r];
		m = r;

		while(l < r && nums[l] <= target) ++l;
		nums[m] = nums[l];
		m = l;
	}
	nums[m] = target;
	return m;
}

void quick_sort(int nums[], int l, int r){
	if(l >= r) return;

	int m = part_sort(nums, l, r);
	quick_sort(nums, m + 1, r);
	quick_sort(nums, l, m - 1);
}

int main(){
	int nums[10] = {10, 9, 7, 4, 3, 2, 8, 6, 5, 1};
	quick_sort(nums, 0, 9);

	for(int i = 0; i < 10; ++i){
		cout << nums[i] << ' ';
	}

	return 0;
}
