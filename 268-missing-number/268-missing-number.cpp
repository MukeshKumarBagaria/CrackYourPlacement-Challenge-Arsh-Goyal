class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int expectedSum=0;
            int arraySum=0;
    for(int i=0;i<=n;i++){
        expectedSum+=i;
    }
        for(int i=0;i<n;i++){
            arraySum+=nums[i];
        }
       
        return expectedSum-arraySum;
    }
};