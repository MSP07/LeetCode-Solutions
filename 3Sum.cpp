class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int len=nums.size();
        for(int i=0;i<=len-1;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=len-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    while(left<right &&nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1])right--;
                    left++;
                    right--;
                }
                if(sum<0){
                    left++;
                }
                if(sum>0){
                    right--;
                }
            }
        }
        return ans;
    }
};
