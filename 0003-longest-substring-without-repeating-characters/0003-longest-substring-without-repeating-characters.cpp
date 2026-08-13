class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        unordered_set<char> set;

        for (int right = 0; right < s.length(); right++) {
            while (set.find(s[right]) != set.end()) {
                set.erase(s[left]);
                left++;
            }

            set.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength; 
    }
};