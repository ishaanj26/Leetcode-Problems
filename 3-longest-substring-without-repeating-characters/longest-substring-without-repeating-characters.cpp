class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen; // Set to store unique characters
        int left = 0, maxLen = 0; // Left pointer and max length
        for (int right = 0; right < s.size(); ++right) {
            // If duplicate character found, shrink the window from the left
            while (seen.find(s[right]) != seen.end()) {
                seen.erase(s[left]); // Remove the leftmost character
                left++; // Move left pointer forward
            }

            seen.insert(s[right]); // Add new character to the set
            maxLen = max(maxLen, right - left + 1); // Update max length
        }
        
        return maxLen;
    }
};