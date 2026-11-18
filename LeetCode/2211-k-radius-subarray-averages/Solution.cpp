class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans1;
        if(n<2*k+1){
            return vector<int>(n,-1);
        }
        vector<int>ans(n,-1);
        for(int i=0;i<k;i++){
            ans[i]=-1;
        }
        for(int i=n-k;i<n;i++){
            ans[i]=-1;
        }
        int i=0;
        long long sum=0;
        while(i<2*k+1){
            sum+=nums[i];
            i++;
        }
        int avg=sum/(2*k+1);
        ans[k]=avg;
        int l=0;
        int m=2*k+1;
        for(int i=k+1;i<n-k;i++){
            sum-=nums[l];
            l++;
            sum+=nums[m];
            m++;
            avg=sum/(2*k+1);
            ans[i]=avg;
        }
        return ans;
    }
};