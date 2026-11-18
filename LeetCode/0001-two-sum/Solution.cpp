class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //APPROACH-1 -> NAIVE APPROACH
        // vector<int> index;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             index.push_back(i);
        //             index.push_back(j);
        //             return index;
        //         }
                
        //     }
        // }
        // return {};

        //APPROACH -2 ->USING HASHMAP
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int compliment=target-nums[i];

            if(mp.find(compliment)!=mp.end()){
                return {mp[compliment],i};
            }

            mp[nums[i]]=i;
        }
        return {};

        //APPROACH-3 -> USING TWO-POINTER APPROACH ONLY WHEN SORTED ARRAY
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int i=0;
        // int j=n-1;
        // while(i<=j){
        //     if(nums[i]+nums[j]==target){
        //         return{i,j};
        //     }
        //     else if(nums[i]+nums[j]<target){
        //         i++;
        //     }
        //     else{
        //         j--;
        //     }
        // }
        // return {};

    }
};