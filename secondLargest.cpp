#include <iostream>
#include <vector>
#include <climits> // for INT_MIN

using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        if (nums.size() < 2) return -1;

        int largest = nums[0];
        int sLargest = -1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > largest) {
                sLargest = largest;
                largest = nums[i];
            } else if (nums[i] < largest && nums[i] > sLargest) {
                sLargest = nums[i];
            }
        }

        return sLargest;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {10, 20, 30, 40, 50};

    int result = sol.secondLargestElement(nums);
    cout << "Second largest element is: " << result << endl;

    return 0;
}
