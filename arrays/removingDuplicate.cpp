class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Check if the array is empty
        if (nums.empty()) {
            return 0;
        }

        // Initialize a pointer j to the first element
        int j = 0;

        // Loop through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // If the current element is not equal to the element at pointer j,
            // increment j and update nums[j] to the current element
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }

        // j is the index of the last unique element, so the number of unique elements is j + 1
        return j + 1;
    }
};