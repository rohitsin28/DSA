class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        if(size <= 1){
            return size;
        }

        int c=1;
        for(int i=1;i<size;i++){
            if(nums[i] != nums[i-1]){
                nums[c++] = nums[i];
            }
        }
        return c;
    }
};