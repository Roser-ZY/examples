#include <iostream>
#include <vector>
using namespace std;

// 插入排序在局部有序或数量较少时排序效果更优
void insert_sort(vector<int>& nums){
	int i, j;
	for(i = 1; i < nums.size(); ++i){
		int key = nums[i];
		for(j = i - 1; j >= 0 && nums[j] > key; --j){
			nums[j + 1] = nums[j];
		}
		nums[j + 1] = key;
		// 测试
		for(int num : nums){
			cout << num << " ";
		}
		cout << endl;
	}
}

int main(){
	vector<int> nums = {4, 5, 8, 9, 3, 6, 1, 2, 7, 0};
	insert_sort(nums);

	//for(int num : nums){
	//	cout << num << " ";
	//}

	return 0;
}
