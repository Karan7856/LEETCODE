class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n=s.length();
        // int left=0;
        // int maxi=INT_MIN;
        // unordered_map<char,int>mp;
        // if(n==0){
        //     return 0;
        // }
        // for(int right=0;right<n;right++){
        //     if(mp.find(s[right])!=mp.end()){
        //         left=max(left,mp[s[right]]+1);
        //     }
        //     mp[s[right]]=right;
        //     maxi=max(maxi,right-left+1);

        // }
        // return maxi;

        int n=s.length();
        int left=0;
        unordered_map<char,int>mp;
        int maxi=INT_MIN;
        if(n==0){
            return 0;
        }
        for(int right=0;right<n;right++){
            if(mp.find(s[right])!=mp.end()){
                left=max(left,mp[s[right]]+1);
            }
            mp[s[right]]=right;
            maxi=max(maxi,right-left+1);
        }
        return maxi;
    }
};