
//the dutch national flag algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int mid=0;
        int j=nums.size()-1;


        while(mid<=j)
        {
            if(nums[mid]==2) 
            {
                swap(nums[mid],nums[j]);
                j--;
                

            }
            else if(nums[mid]==0)
            {
                swap(nums[i],nums[mid]);
                i++;
                mid++;
            }
            else if (nums[mid]==1){
                
                mid++;;
            }
           

           

        

        }
    }
};
