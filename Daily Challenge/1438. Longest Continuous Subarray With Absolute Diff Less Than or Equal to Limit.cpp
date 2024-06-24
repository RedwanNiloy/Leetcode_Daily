
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int left = 0,right = 0,n=nums.size(),res=0;
        deque<int> mini,maxi;
        while(right < n){
            while(!mini.empty() && mini.back() > nums[right]) mini.pop_back();
            mini.push_back(nums[right]);

            while(!maxi.empty() && maxi.back() < nums[right]) maxi.pop_back();
            maxi.push_back(nums[right]);

            while(maxi.front()-mini.front() > limit){
                if(nums[left]==maxi.front()) maxi.pop_front();
                if(nums[left]==mini.front()) mini.pop_front();
                left++;
            }
            res = max(res,right-left+1);
            right++;
        }
        return res;
    }
};
