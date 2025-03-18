class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // Map to store the number and its index

        // Loop through the list of numbers
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // Calculate the complement

            // Check if the complement is already in the map
            if (seen.find(complement) != seen.end()) {
                // If found, return the indices of the two numbers
                return {seen[complement], i};
            }

            // Otherwise, store the current number and its index in the map
            seen[nums[i]] = i;
        }

        // Return an empty vector if no solution is found (optional, based on
        // the problem statement)
        return {};
    }
};