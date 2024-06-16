Approach 1
Using sort ()

Time complexity: O(nlogn)
Space Complexity : O(1)

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        
       unordered_map<int,int>mp;
       int c=0;
       sort(nums.begin(),nums.end());
        //int prev=nums[0];
       for(int i=1;i<nums.size();i++)
       {
        if(nums[i]<=nums[i-1])
        {
            c+=nums[i-1]+1-nums[i];
            nums[i]=nums[i-1]+1;
        }
        


       }
           
    





return c;

    }
};


Approach 2
Using counting sort
Time complexity : O(n)
Space complexity : O(n)


class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        int maxElement = 0;
        int moves = 0;

        for (int val : nums) {
            maxElement = max(maxElement, val);
        }

        vector<int> count(n + maxElement, 0);

        for (int val : nums) {
            count[val]++;
        }

        for (int i = 0; i < count.size(); i++) {
            if (count[i] <= 1) continue;

            int extra = count[i] - 1;
            count[i + 1] += extra;
            count[i] = 1;
            moves += extra;
        }

        return moves;
    }
};






