class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        unordered_set<int> s;

        int c=0;
        for(int i=0;i<size;i++){
            if(s.find(nums[i]) == s.end()){
                s.insert(nums[i]);
                nums[c++] = nums[i];
            }
        }
        return s.size();
    }
};