class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int ans = 0;
        int maxi = 0;
        unordered_map<char, int> mp;
        for (int right = 0; right < s.length(); right++) {
            mp[s[right]]++;
            maxi = max(maxi, mp[s[right]]);
            int changes = (right - left + 1) - maxi;
            if (changes > k) {
                mp[s[left]]--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};